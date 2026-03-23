#include <stdio.h>
#include <conio.h>
#define SIZE 5
#define SOURCE 0
int graph[SIZE][SIZE], vertex = 0;
int visited[SIZE];
void add_vertex()
{
	if (vertex >= SIZE)
		printf("Out of range!\n");
	else
	{
		int i;
		for (i = 0; i <= vertex; i++)
		{
			graph[vertex][i] = 0;
			graph[i][vertex] = 0;
		}
		vertex++;
		printf("Vertex Count: %d\n", vertex);
	}
}
void remove_vertex()
{
	int v, i, j;
	printf("Enter vertex to be removed: ");
	scanf("%d", &v);

	if (v < 0 || v >= vertex)
		printf("Invalid vertex!\n");
	else
	{
		// shifting all row up
		for (i = v; i < (vertex - 1); i++)
		{
			for (j = 0; j < vertex; j++)
				graph[i][j] = graph[i + 1][j];
		}

		// shifting all column left
		for (i = 0; i < (vertex - 1); i++)
		{
			for (j = v; j < (vertex - 1); j++)
				graph[i][j] = graph[i][j + 1];
		}

		// decrement vertex
		vertex--;
		printf("removed vertex.\n");
	}
}
void add_edge()
{
	int src, dest;
	printf("Enter source and destination vertex: ");
	scanf("%d %d", &src, &dest);

	if (src < 0 || src >= vertex || dest < 0 || dest >= vertex)
	{
		printf("Out of range!\n");
		return;
	}

	graph[src][dest] = 1;
	graph[dest][src] = 1;
	printf("Edge added between %d and %d.\n", src, dest);
}

void remove_edge()
{
	int src, dest;
	printf("Enter source and destination vertex: ");
	scanf("%d %d", &src, &dest);

	if (src < 0 || src >= vertex || dest < 0 || dest >= vertex)
	{
		printf("Out of range!\n");
		return;
	}

	graph[src][dest] = 0;
	graph[dest][src] = 0;
	printf("Edge removed between %d and %d.\n", src, dest);
}

void dfs(int cur)
{
	int i;
	if (cur < 0 || cur >= vertex)
	{
		printf("Invalid current vertex in DFS function!\n");
		return;
	}

	printf("%d ", cur);
	visited[cur] = 1;

	for (i = 0; i < vertex; i++)
	{
		if (graph[cur][i] == 1 && visited[i] == 0)
			dfs(i);
	}
}
void main()
{
	int ch;
	int i;
	clrscr();

	for (i = 0; i < SIZE; i++)
		visited[i] = 0;

	while (1)
	{
		printf("\n0: Exit\n1: Add vertex\n2: Remove vertex\n3: Add edge\n4: Remove edge\n5: display DFS\nEnter your choice: ");
		scanf("%d", &ch);

		switch (ch)
		{
		case 0:
			exit(0);
		case 1:
			add_vertex();
			break;
		case 2:
			remove_vertex();
			break;
		case 3:
			add_edge();
			break;
		case 4:
			remove_edge();
			break;
		case 5:
			if (vertex == 0)
			{
				printf("Graph is empty! Add vertices first.\n");
				break;
			}
			for (i = 0; i < vertex; i++)
				visited[i] = 0;
			printf("\nDFS: ");
			dfs(SOURCE);
			printf("\n");
			break;
		default:
			printf("Enter valid choice!\n");
		}
	}
}