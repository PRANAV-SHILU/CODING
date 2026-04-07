#include <stdio.h>
#include <conio.h>
void main()
{
	int i, j, k, a[5], b[5], c[10], temp;
	// i for first array a[i],
	// j for second array b[j],
	// k for merged array c[k]
	clrscr();

	printf("First array : \n");
	for (i = 0; i < 5; i++)
	{
		printf("Enter %d :", i + 1);
		scanf("%d", &a[i]);
	}

	printf("\nSecond array : \n");
	for (i = 0; i < 5; i++)
	{
		printf("Enter %d :", i + 1);
		scanf("%d", &b[i]);
	}

	i = j = k = 0; // initialize all to 0 before merging

	// logic to merge two arrays into a single array
	while (i < 5 && j < 5)
	{
		if (a[i] <= b[j])
		{
			c[k] = a[i];
			k++;
			i++;
		}
		else
		{
			c[k] = b[j];
			k++;
			j++;
		}
	}

	// logic to add remaining elements of first array
	while (i < 5)
	{
		c[k] = a[i];
		k++;
		i++;
	}

	// logic to add remaining elements of second array
	while (j < 5)
	{
		c[k] = b[j];
		k++;
		j++;
	}

	// logic to sort the merged array using bubble sort
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (c[j] > c[j + 1])
			{
				temp = c[j];
				c[j] = c[j + 1];
				c[j + 1] = temp;
			}
		}
	}

	printf("\n\nMERGE SORT : ");
	for (i = 0; i < 10; i++)
		printf("%d ", c[i]);

	getch();
}