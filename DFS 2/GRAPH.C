#include <stdio.h>
#include <conio.h>
#define SOURCE 0 // source vertex for DFS and BFS to start from
#define SIZE 4
/* graph visualization
  0-----1
  |     |
  |     |
  3     2
*/
int visited[SIZE] = {0, 0, 0, 0}; // for checking wheter that node is visited or not
int arr[SIZE][SIZE] = {
	{0, 1, 0, 1},
	{1, 0, 1, 0},
	{0, 1, 0, 0},
	{1, 0, 0, 0}};
int queue[SIZE], front = 0, rear = 0; // for BFS,
// queue is used to store the vertices which are visited and to be displayed
// front is used to delete and display verted which came first
// rear is used to insert the visited vertex in queue
int node; // for storing the vertex which is being displayed in BFS

void dfs(int cur)
{
	int i;
	if (cur >= SIZE)
	{
		printf("Invalid source!");
		return;
	}

	printf("%d -> ", cur);
	visited[cur] = 1;

	for (i = 0; i < SIZE; i++)
	{
		if (arr[cur][i] == 1 && visited[i] == 0) // if there is an edge in adjacency vertex and that vertex is not visited
			dfs(i);
	}
}
void bfs(int start)
{
	int i;
	if (start >= SIZE)
	{
		printf("Invalid source!");
		return;
	}

	visited[start] = 1;
	queue[rear] = start;
	rear++;

	while (front < rear)
	{
		node = queue[front];
		front++;
		printf("%d -> ", node);

		for (i = 0; i < SIZE; i++)
		{
			if (arr[node][i] == 1 && visited[i] == 0)
			{
				visited[i] = 1;
				queue[rear] = i;
				rear++;
			}
		}
	}
}
void main()
{
	int ch;
	clrscr();

	// currently visited array is all 0, which means all vertex are unvisited, if we want to use BFS after DFS then we have to make all vertex unvisited again by making all element of visited array 0 again

	printf("DFS:  ");
	dfs(SOURCE);

	printf("\n\nBFS:  ");
	// bfs(SOURCE);

	getch();
}