#include<stdio.h>
#include<conio.h>
#define SOURCE 0
#define SIZE 4
/* graph
  0-----1
  |     |
  |     |
  3-----2
*/
int visited[SIZE]={0,0,0,0};
int arr[SIZE][SIZE]={
		{0,1,0,1},
		{1,0,1,0},
		{0,1,0,0},
		{1,0,0,0}
	      };
int queue[SIZE],front=0,rear=0;
int node;
void dfs(int cur)
{
	int i;
	if(cur >= SIZE)
	{
		printf("Invalid source!");
		return;
	}

	printf("%d -> ",cur);
	visited[cur]=1;

	for(i=0;i<SIZE;i++)
	{
		if(arr[cur][i]==1 && visited[i]==0)
			dfs(i);
	}
}
void bfs(int start)
{
	int i;
	if(start >= SIZE)
	{
		printf("Invalid source!");
		return;
	}

	visited[start]=1;
	queue[rear]=start;
	rear++;

	while(front < rear)
	{
		node=queue[front];
		front++;
		printf("%d -> ",node);

		for(i=0; i<SIZE; i++)
		{
			if(arr[node][i]==1 && visited[i]==0)
			{
				visited[i]=1;
				queue[rear]=i;
				rear++;
			}
		}
	}
}
void main()
{
	int ch;
	clrscr();

	printf("DFS:  ");
	dfs(SOURCE);

	printf("\n\nBFS:  ");
	//bfs(SOURCE);

	getch();
}