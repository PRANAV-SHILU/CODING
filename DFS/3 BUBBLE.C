#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,temp,a[5];
	clrscr();

	for(i=0;i<5;i++)
	{
		printf("Enter [%d] : ",i+1);
		scanf("%d",&a[i]);
	}

	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

	textcolor(RED);
	cprintf("\n\nBUBBLE SORT :  ");
	for(i=0;i<5;i++)
	{
		textcolor(GREEN);
	       cprintf("%d  ",a[i]);
	}
	getch();
}