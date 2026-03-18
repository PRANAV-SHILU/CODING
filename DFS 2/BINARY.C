#include<stdio.h>
#include<conio.h>
struct stud
{
	int roll;
	char name[30];
	struct stud *lp,*rp;
};
struct stud *create(int val)
{
	struct stud *new1 = (struct stud *)malloc(sizeof(struct stud));
	printf("Enter name: ");
	scanf("%s",new1->name);
	new1->roll=val;
	new1->lp=new1->rp=NULL;
	return new1;
}
struct stud *ins(int val,struct stud *root)
{
	if(root == NULL)
		root=create(val);
	else if(val < root->roll)
		root->lp=ins(val,root->lp);
	else if(val > root->roll)
		root->rp=ins(val,root->rp);
	else
		printf("\nDUPLICATE VALUE NOT ALLOWED!\n");

	return root;
}
void main()
{
	int ch,val;
	struct stud *root=NULL;
	clrscr();

	do
	{
		printf("0 Exit\n1 Insert\n2 In-order\n3 Pre-order\n4 Post-order\n5 Search\n6 Update\n7 Delete");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 0:
				exit(0);
			case 1:
				printf("Enter roll to insert: ");
				scanf("%d",&val);
				root=ins(val,root);
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
				scanf("%d",&val);
				search(val,root);
				break;
			case 6:
				printf("Enter roll to update: ");
				scanf("%d",&val);
				update(val,root);
				break;
			case 7:
				printf("Enter roll to delete: ");
				scanf("%d",&val);
				del();
				break;
			default:
				printf("\nINVALID CHOICE!\n");
		}
		clrscr();
	}while(1);
}



