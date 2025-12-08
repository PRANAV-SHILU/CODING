#include<stdio.h>
#include<conio.h>
#include<process.h>
struct stud
{
	int roll;
	struct stud *next;
};
struct stud *head=NULL,*new1,*temp,*temp1;
int node=0,node_no;

struct stud *create()
{
	new1=(struct stud *)malloc(sizeof(struct stud));

	printf("\nEnter roll no : ");
	scanf("%d",&new1->roll);

	new1->next=NULL;

	return new1;
}
void ins()
{
	if(head==NULL)
	{
		head=create();
	}
	else
	{
	       temp=head;
	       while(temp->next!=NULL)
	       {
			temp=temp->next;
	       }
	       temp->next=create();
	}
	node++;
}
void ins_first()
{
	temp=create();
	temp->next=head;
	head=temp;
	node++;
}
void ins_spe_before()
{
	int cnt=1;
	printf("\nENter node no : ");
	scanf("%d",&node_no);

	if(head==NULL)
	{
		textcolor(RED);
		cprintf("\nNode is Empty !\n");
	}
	else if(node_no>node || node_no<2)
	{
		textcolor(RED);
		cprintf("\nInvalid node no !\n");
	}
	else
	{
		temp=head;
		while(node_no!=cnt)
		{
			temp1=temp;
			temp=temp->next;
			cnt++;
		}
		temp1->next=create();
		new1->next=temp;

		node++;
	}
}
void ins_spe_after()
{
	int cnt=1;
	printf("\nENter node no : ");
	scanf("%d",&node_no);

	if(head==NULL)
	{
		textcolor(RED);
		cprintf("\nNode is Empty !\n");
	}
	else if(node_no>node || node_no<1)
	{
		textcolor(RED);
		cprintf("\nInvalid node no !\n");
	}
	else
	{
		while(node_no!=cnt)
		{
			temp=temp->next;
			cnt++;
		}
		temp1=create();
		temp1->next=temp->next;
		temp->next=temp1;
		node++;
	}
}
void dis()
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
		while(temp!=NULL)
		{
			printf("\nRoll no : %d",temp->roll);
			temp=temp->next;
		}
		printf("\n");
		textcolor(YELLOW);
		cprintf("TOTAL NODE = %d\n",node);
	}
}
void dis_spe()
{
	int cnt=1;
	printf("\nENter node no : ");
	scanf("%d",&node_no);

	if(head==NULL)
	{
		textcolor(RED);
		cprintf("\nNode is Empty !\n");
	}
	else if(node_no>node || node_no<1)
	{
		textcolor(RED);
		cprintf("\nInvalid node no !\n");
	}
	else
	{
		temp=head;
		while(node_no!=cnt)
		{
			temp=temp->next;
			cnt++;
		}
		printf("\nRoll no : %d",temp->roll);
	}
}
void dis_first()
{
	if(head==NULL)
	{
		textcolor(RED);
		cprintf("\nNode is Empty !\n");
	}
	else
	{
		textcolor(GREEN);
		cprintf("\nFirst Roll no = %d\n",head->roll);
	}
}
void dislast()
{
	if(head==NULL)
	{
		textcolor(RED);
		cprintf("\nNode is Empty !\n");
	}
	else
	{
		temp=head;

		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		textcolor(GREEN);
		cprintf("Last Roll no = %d\n",temp->roll);
	}
}
void delfirst()
{
	if(head==NULL)
	{
		textcolor(RED);
		cprintf("\nNode is Empty !\n");
	}
	else
	{
		temp=head;
		head=head->next;
		free(temp);
		textcolor(RED);
		cprintf("\nNODE DELETED!\n");
		node--;
	}
}
void del_spe()
{
	int cnt=1;
	printf("\nENter node no : ");
	scanf("%d",&node_no);

	if(head==NULL)
	{
		textcolor(RED);
		cprintf("\nNode is Empty !\n");
	}
	else if(node_no>node || node_no<node)
	{
		textcolor(RED);
		cprintf("\nInvalid node no !\n");
	}
	else if(node_no==1)
		delfirst();
	else
	{
		temp=head;
		while(node_no!=cnt)
		{
			temp1=temp;
			temp=temp->next;
			cnt++;
		}
		temp1->next=temp->next;
		free(temp);

		textcolor(RED);
		cprintf("\nNODE DELETED!");
		node--;
	}
}
void dellast()
{
	if(head==NULL)
	{
		textcolor(RED);
		cprintf("\nNode is Empty !\n");
	}
	else if(head->next==NULL)
		delfirst();
	else
	{
		//logic 1
	 /*	struct stud *temp1;
		temp=head;
		while(temp->next!=NULL)
		{
			temp1=temp;
			temp=temp->next;
		}
		free(temp->next);
		temp1->next=NULL;      */

		//logic 2
		temp=head;
		while(temp->next->next!=NULL)
			temp=temp->next;

		free(temp->next);
		temp->next=NULL;

		textcolor(RED);
		cprintf("\nNODE DELETED!");
		node--;
	}
}
void update()
{
	int rno,isfound=1;
	printf("\nEnter roll no : ");
	scanf("%d",&rno);

	if(head==NULL)
	{
		textcolor(RED);
		cprintf("\nNode is Empty !\n");
	}
	else
	{
		temp=head;

		while(rno!=temp->roll)
		{
			temp=temp->next;
			if(temp==NULL)
				break;
		}
		printf("\nEnter new roll no : ");
		scanf("%d",&temp->roll);
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
		printf("\n11 Insert first");
		printf("\n8 Insert specific before");
		printf("\n9 Insert specific after");
		printf("\n2 Display  ");
		printf("\n3 Dsiplay first  ");
		printf("\n4 Display last");
		printf("\n22 Display specific ");
		printf("\n5 Delete first  ");
		printf("\n6 Delete last  ");
		printf("\n7 Delete specific");
		printf("\n10 Update record");
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
			case 11:
				ins_first();
				break;
			case 8:
				ins_spe_before();
				break;
			case 9:
				ins_spe_after();
				break;
			case 2:
				dis();
				break;
			case 22:
				dis_spe();
				break;
			case 3:
				dis_first();
				break;
			case 4:
				textcolor(GREEN);
				dislast();
				break;
			case 5:
				delfirst();
				break;
			case 6:
				dellast();
				break;
			case 7:
				del_spe();
				break;
			case 10:
				update();
				break;
			default:
				textcolor(RED);
				cprintf("\nINVALID CHOICE !\n");
				break;

		}
	}
}