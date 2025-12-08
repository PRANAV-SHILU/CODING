#include<stdio.h>
#include<conio.h>
#include<process.h>
struct stud
{
	int roll;
	struct stud *next,*prev;
};
struct stud *head=NULL,*new1,*temp,*temp1;
int node=0;

struct stud *create()
{
	new1=(struct stud *)malloc(sizeof(struct stud));

	printf("\nEnter roll no : ");
	scanf("%d",&new1->roll);

	new1->next=NULL;
	new1->prev=NULL;

	return new1;
}
void ins()
{
	if(head==NULL)
		head=create();
	else
	{
	       temp=head;
	       while(temp->next!=NULL)
	       {
			temp=temp->next;
	       }
	       temp->next=create();
	       new1->prev=temp;
	}
	node++;
}
void dis_rev()
{
	if(head==NULL)
	{
		textcolor(RED);
		cprintf("\nNode is Empty !\n");
	}
	else
	{
		temp=head;
		textcolor(GREEN);
		cprintf("\nDISPLAY");

		while(temp->next!=NULL)
			temp=temp->next;

		while(temp!=NULL)
		{
			printf("\nRoll no : %d",temp->roll);
			temp=temp->prev;
		}

		printf("\n");
		textcolor(YELLOW);
		cprintf("TOTAL NODE = %d\n",node);
	}
}
void main()
{
	int ch;
	clrscr();

	while(1)
	{
		printf("\n0 Exit ");
		printf("\n1 Insert ");
		printf("\n2 Display Reverse ");
		printf("\nEnter your choice : ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 0:
				exit(0);
				break;
			case 1:
				ins();
				break;
			case 2:
				dis_rev();
				break;
			default:
				textcolor(RED);
				cprintf("\nINVALID CHOICE !\n");
				break;

		}
	}
}