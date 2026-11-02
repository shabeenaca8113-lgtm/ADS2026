#include <stdio.h>
int N,M;
void createAdjMatrix(int Adj[][N+1],int arr[][2])
		{
		for(int i=0;i<N+1;i++)
		{
		for(int j=0;j<N+1;j++)
		{
		Adj[i][j]=0;
		}
		}
		for(int i=0;i<M;i++)
		{
		int X=arr[i][0];
		int Y=arr[i][1];
		Adj[X][Y]=1;
		Adj[Y][X]=1;
		}
		}
		void printAdjMatrix(int Adj[][N+1])
		{
		for(int i=1;i<N+1;i++)
		{
			for(int j=1;j<N+1;j++)
			{
				printf("%d",Adj[i][j]);
			}
			printf("\n");
		}
		}
int main()
{
	N=5;
	int arr[][2]={{1,2},{2,3},{4,5},{1,5}};
	M=sizeof(arr)/sizeof(arr[0]);
	int Adj[N+1][N+1];
	createAdjMatrix(Adj,arr);
	printAdjMatrix(Adj);
	return 0;
}
