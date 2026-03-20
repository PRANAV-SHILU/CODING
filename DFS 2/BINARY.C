#include <stdio.h>
#include <conio.h>
#include <string.h>
struct stud
{
	int roll;
	char name[30];
	struct stud *lp, *rp;
};
struct stud *create(int val)
{
	struct stud *new1 = (struct stud *)malloc(sizeof(struct stud));
	printf("Enter name: ");
	scanf("%s", new1->name);
	new1->roll = val;
	new1->lp = new1->rp = NULL;
	return new1;
}
struct stud *ins(int val, struct stud *root)
{
	if (root == NULL)
		root = create(val);
	else if (val < root->roll)
		root->lp = ins(val, root->lp);
	else if (val > root->roll)
		root->rp = ins(val, root->rp);
	else
		printf("\nDUPLICATE VALUE NOT ALLOWED!\n");

	return root;
}
void inorder(struct stud *root)
{
	if (root != NULL)
	{
		inorder(root->lp);
		printf("%d\t%s\n", root->roll, root->name);
		inorder(root->rp);
	}
}
void preorder(struct stud *root)
{
	if (root != NULL)
	{
		printf("%d\t%s\n", root->roll, root->name);
		preorder(root->lp);
		preorder(root->rp);
	}
}
void postorder(struct stud *root)
{
	if (root != NULL)
	{
		postorder(root->lp);
		postorder(root->rp);
		printf("%d\t%s\n", root->roll, root->name);
	}
}
void search(int val, struct stud *root)
{
	if (root != NULL)
	{
		if (val == root->roll)
		{
			printf("Data Found\n");
			printf("%d\t%s\n", root->roll, root->name);
		}
		else if (val < root->roll)
			search(val, root->lp);
		else if (val > root->roll)
			search(val, root->rp);
	}
	else
		printf("\nData NOT Found!\n");
}
void update(int val, struct stud *root)
{
	// if there is only roll, use following statement
	// root=del(val,root);
	// root=ins(val,root);
	if (root != NULL)
	{
		if (val == root->roll)
		{
			printf("Enter new name: ");
			scanf("%s", root->name);
			printf("Data Updated successfuly\n");
		}
		else if (val < root->roll)
			update(val, root->lp);
		else if (val > root->roll)
			update(val, root->rp);
	}
	else
		printf("\nData NOT Found!\n");
}
struct stud *del(int val, struct stud *root)
{
	if (root == NULL)
	{
		printf("\nTree is empty or data NOT found!\n");
		return NULL;
	}
	else if (val < root->roll)
		root->lp = del(val, root->lp);
	else if (val > root->roll)
		root->rp = del(val, root->rp);
	else
	{
		if (root->lp == NULL && root->rp == NULL)
		{
			free(root);
			return NULL;
		}
		else if (root->lp == NULL && root->rp != NULL)
		{
			struct stud *temp = root->rp;
			free(root);
			return temp;
		}
		else if (root->rp == NULL && root->lp != NULL)
		{
			struct stud *temp = root->lp;
			free(root);
			return temp;
		}
		else
		{
			struct stud *temp = root->rp;
			while (temp->lp != NULL)
				temp = temp->lp;
			root->roll = temp->roll;
			strcpy(root->name, temp->name);
			root->rp = del(temp->roll, root->rp);
		}
	}
	// this return is because of return type, this return of else part of above of above
	return root;
}
void main()
{
	int ch, val;
	struct stud *root = NULL;
	clrscr();

	do
	{
		printf("\n0 Exit\n1 Insert\n2 In-order\n3 Pre-order\n4 Post-order\n5 Search\n6 Update\n7 Delete");
		printf("\nEnter your choice: ");
		scanf("%d", &ch);

		switch (ch)
		{
		case 0:
			exit(0);
		case 1:
			printf("Enter roll to insert: ");
			scanf("%d", &val);
			root = ins(val, root);
			break;
		case 2:
			inorder(root);
			break;
		case 3:
			preorder(root);
			break;
		case 4:
			postorder(root);
			break;
		case 5:
			printf("Enter roll to search: ");
			scanf("%d", &val);
			search(val, root);
			break;
		case 6:
			printf("Enter roll to update: ");
			scanf("%d", &val);
			update(val, root);
			break;
		case 7:
			printf("Enter roll to delete: ");
			scanf("%d", &val);
			root = del(val, root);
			break;
		default:
			printf("\nINVALID CHOICE!\n");
		}
	} while (1);
}
