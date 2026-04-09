#include <stdio.h>
#include <conio.h>
void main()
{
	int i, j, temp, a[5];
	clrscr();

	for (i = 0; i < 5; i++)
	{
		printf("\nEnter [%d] : ", i + 1);
		scanf("%d", &a[i]);

		temp = a[i];
		for (j = i - 1; j >= 0; j--)
		{
			if (a[j] > temp)
			{
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}

		printf("\t\t");
		textcolor(RED);
		cprintf("INSERTION SORT : ");
		for (j = 0; j <= i; j++)
		{
			textcolor(GREEN);
			cprintf("%d  ", a[j]);
		}
	}
	getch();
}
