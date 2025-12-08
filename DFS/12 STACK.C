#include<stdio.h>
#include<conio.h>
#include<process.h>
int tos=-1,arr[5],size=5;
void push()
{
	if(tos==size-1)
		printf("\nstack overflow\n");
	else
	{
		tos++;
		scanf("%d",&arr[tos]);
	}
}
void pop()
{
	if(tos==-1)
		printf("\nstack underflow\n");
	else
		tos--;
}
void peep()
{
	if(tos==-1)
		printf("\nstack unferflow\n");
	else
	{
		printf("\nLast inserted : %d ",arr[tos]);   //last inserted
		printf("\nLast deleted : %d\n",arr[tos+1]);  //last deleted
	}
}
void display()
{
	if(tos==-1)
		printf("\nstack underflow\n");
	else
	{
		int i;
		printf("\ndisplay reverse : ");
		for(i=tos;i>=0;i--)
			printf("%d | ",arr[i]);
	}
}
void main()
{
	int ch;
	clrscr();

	while(1)
	{
		printf("\n1 push 2 pop 3 peep 4 display reverse 0 exit : ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 0:
				exit(0);
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				peep();
				break;
			case 4:
				display();
				break;
			default:
				 printf("\nInvalid chice\n");
				 break;
		}
	}
}