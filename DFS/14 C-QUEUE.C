#include<stdio.h>
#include<conio.h>
int arr[5],size=5,f=-1,r=-1,i;
void insert()
{
	if( (f==0 && r==size-1) || (f==r+1) )
		printf("\nfull\n");
	else
	{
		if(f==-1)
			f=r=0;
		else if(r==size-1)
			r=0;
		else
			r++;

		scanf("%d",&arr[r]);
	}
}
void delete()
{
	if(f==-1)
		printf("\nempty\n");
	else if(f==r)
		f=r=-1;
	else if(f==size-1)
		f=0;
	else
		f++;
}
void display()
{
	if(f==-1)
		printf("empty");
	else if(f<=r)
	{
		for(i=f;i<=r;i++)
			printf(" %d ",arr[i]);
	}
	else
	{
		for(i=f;i<=size-1;i++)
			printf(" %d ",arr[i]);
		for(i=0;i<=r;i++)
			printf(" %d ",arr[i]);
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