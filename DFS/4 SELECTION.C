#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,temp,min,a[5];
	clrscr();

	for(i=0;i<5;i++)
	{
		printf("Enter [%d] : ",i+1);
		scanf("%d",&a[i]);
	}

	for(i=0;i<5;i++)
	{
		min=i;
		for(j=i+1;j<5;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
			}
		}
		temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	}


	textcolor(RED);
	cprintf("\n\nSELECTION SORT :  ");
	for(i=0;i<5;i++)
	{
		textcolor(GREEN);
	       cprintf("%d  ",a[i]);
	}
	getch();
}
