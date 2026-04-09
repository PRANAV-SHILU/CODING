#include <stdio.h>
#include <conio.h>
void main()
{
	int i, found = 0, a[5], n;
	clrscr();

	for (i = 0; i < 5; i++)
	{
		printf("Index %d : ", i);
		scanf("%d", &a[i]);
	}

	printf("\nEnter number to search : ");
	scanf("%d", &n);

	for (i = 0; i < 5; i++)
	{
		if (a[i] == n)
		{
			textcolor(GREEN);
			cprintf("\n\nNUMBER FOUND !");
			found = 1;
			break;
		}
	}

	if (!found)
	{
		textcolor(RED);
		cprintf("\n\nNUMBER NOT FOUND !");
	}

	getch();
}