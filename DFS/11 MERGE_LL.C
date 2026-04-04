#include <stdio.h>
#include <conio.h>
#include <process.h>
struct stud
{
	int roll;
	struct stud *next;
};
struct stud *head1 = NULL, *head2 = NULL, *new1, *temp;
int ismerged = 0;
struct stud *create()
{
	new1 = (struct stud *)malloc(sizeof(struct stud));

	printf("\nEnter roll no : ");
	scanf("%d", &new1->roll);

	new1->next = NULL;

	return new1;
}
void ins1()
{
	if (head1 == NULL)
	{
		head1 = create();
	}
	else
	{
		temp = head1;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = create();
	}
}
void ins2()
{
	if (head2 == NULL)
	{
		head2 = create();
	}
	else
	{
		temp = head2;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = create();
	}
}
void merge()
{
	if (!ismerged)
	{
		temp = head1;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = head2;
	}
	textcolor(GREEN);
	cprintf("\nLINKLIST MERGED!\n");
}
// if we want to insert in first linklist after merge, then we have to change the next of last node of first linklist to new node and next of new node to head of second linklist
void ins_in_first_after_merge()
{
	temp = head1;
	while (temp->next != head2)
		temp = temp->next;
	temp->next = create();
	//	merge();
	new1->next = head2;
}
void dis()
{
	if (head1 == NULL)
	{
		textcolor(RED);
		cprintf("\nNode is Empty !\n");
	}
	else
	{
		temp = head1;
		textcolor(GREEN);
		cprintf("\nDISPLAY");
		while (temp != NULL)
		{
			printf("\nRoll no : %d", temp->roll);
			temp = temp->next;
		}
	}
}
void main()
{
	int ch;
	clrscr();

	while (1)
	{
		printf("\n0 Exit ");
		printf("\n1 Insert in first LinkList");
		printf("\n2 Insert in first LinkList after merge");
		printf("\n3 Insert in second LinkList");
		printf("\n4 Merge the list");
		printf("\n5 Display merged LinkList");
		printf("\nEnter your choice : ");
		scanf("%d", &ch);

		switch (ch)
		{
		case 0:
			exit(0);
			break;
		case 1:
			ins1();
			break;
		case 2:
			ins_in_first_after_merge();
			break;
		case 3:
			ins2();
			break;
		case 4:
			merge();
			break;
		case 5:
			dis();
			break;
		default:
			textcolor(RED);
			cprintf("\nINVALID CHOICE !\n");
			break;
		}
	}
}