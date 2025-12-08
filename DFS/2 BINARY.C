#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,mid,a[5],n,f=0,l=4,found=0;
	clrscr();

	for(i=0;i<5;i++)
	{
		printf("Enter [%d] : ",i+1);
		scanf("%d",&a[i]);
	}

	printf("\nEnter number to search : ");
	scanf("%d",&n);

	while(f<=l)
	{
		mid=(f+l)/2;

		if(a[mid]==n)
		{
			textcolor(GREEN);
			cprintf("\n\nDATA FOUND !");
			found=1;
			break;
		}
		else if(a[mid]>n)
		{
			l=mid-1;
		}
		else
		{
			f=mid+1;
		}
	}

	if(!found)
	{
		textcolor(RED);
		cprintf("\n\nDATA NOT FOUND !");
	}

	getch();
}