#include <stdio.h>
#include <conio.h>
#include <process.h>
struct stud
{
	int roll;
	struct stud *next;
};
struct stud *head = NULL, *new1, *temp, *temp1;
int node = 0, node_no;

struct stud *create()
{
	new1 = (struct stud *)malloc(sizeof(struct stud));

	printf("\nEnter roll no : ");
	scanf("%d", &new1->roll);

	new1->next = NULL;

	return new1;
}
void ins()
{
	if (head == NULL)
	{
		head = create();
		head->next = head;
	}
	else
	{
		temp = head;
		while (temp->next != head)
			temp = temp->next;

		temp->next = create();
		new1->next = head;
	}
	node++;
}
void ins_first()
{
	temp = create();
	temp->next = head;

	temp = head;
	while (temp->next != head)
		temp = temp->next;

	temp->next = new1;
	head = new1;

	node++;
}
void dis()
{
	if (head == NULL)
	{
		textcolor(RED);
		cprintf("\nNode is Empty !\n");
	}
	else
	{
		temp = head;
		textcolor(GREEN);
		cprintf("\nDISPLAY");
		do
		{
			printf("\nRoll no : %d", temp->roll);
			temp = temp->next;
		} while (temp != head);

		printf("\n");
		textcolor(YELLOW);
		cprintf("TOTAL NODE = %d\n", node);
	}
}
void delfirst()
{
	if (head == NULL)
	{
		textcolor(RED);
		cprintf("\nNode is Empty !\n");
	}
	else
	{
		temp = head;

		while (temp->next != head)
			temp = temp->next;

		head = head->next;
		free(temp->next);
		temp->next = head;

		textcolor(RED);
		cprintf("\nNODE DELETED!\n");
		node--;
	}
}
void dellast()
{
	if (head == NULL)
	{
		textcolor(RED);
		cprintf("\nNode is Empty !\n");
	}
	else if (head->next == NULL)
		delfirst();
	else
	{
		temp = head;
		while (temp->next->next != head)
			temp = temp->next;

		free(temp->next);
		temp->next = head;

		textcolor(RED);
		cprintf("\nNODE DELETED!");
		node--;
	}
}
void main()
{
	int ch;
	clrscr();

	while (1)
	{
		printf("\n0 Exit ");
		printf("\n1 Insert ");
		printf("\n2 Insert first");
		printf("\n3 Display  ");
		printf("\n3 Delete first  ");
		printf("\n5 Delete last  ");
		printf("\nEnter your choice : ");
		scanf("%d", &ch);

		switch (ch)
		{
		case 0:
			exit(0);
			break;
		case 1:
			ins();
			break;
		case 2:
			ins_first();
			break;
		case 3:
			dis();
			break;
		case 4:
			delfirst();
			break;
		case 5:
			dellast();
			break;
		default:
			textcolor(RED);
			cprintf("\nINVALID CHOICE !\n");
			break;
		}
	}
}