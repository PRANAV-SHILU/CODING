#include<stdio.h>
#include<conio.h>
int arr[5],size=5,f=-1,r=-1;
void insert()
{
	if(r==size-1)
		printf("\nqueue is full\n");
	else
	{
		if(f==-1)
			f=0;
		r++;
		scanf("%d",&arr[r]);
	}
}
void delete()
{
	if(f==-1 || f>r)
	{
		printf("\nqueue is empty");
		f=r=-1;
	}
	else
		f++;
}
void display()
{
	if(f==-1 || f>r )
	{
		printf("\nqueue is empty");
		f=r=-1;
	}
	else
	{
		int i;
		printf("\ndisplay : ");
		for(i=f; i<=r; i++)
			printf("%d | ",arr[i]);
	}
}
void main()
{
	int ch;
	clrscr();

	while(1)
	{
		printf("\n0 exit  1 insert 2 delete 3 display : ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 0: exit(0);
			case 1: insert(); break;
			case 2: delete(); break;
			case 3: display(); break;
			default: printf("\ninvalid"); break;
		}
	}
}