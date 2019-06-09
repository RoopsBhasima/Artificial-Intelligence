#include<stdio.h>
#include<conio.h>
int G[10][10],visited[10],n,i,j;
void DFS(int);
int main()
{
    printf("Number of vertices:");
    scanf("%d",&n);
    printf("Enter the adjacency matrix:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&G[i][j]);
    }
    for(i=0;i<n;i++)
    {
        visited[i]=0;
    }
    DFS(0);
}
void DFS(int i)
{
    int j;
    printf("\n%d",i);
    visited[i]=1;
    for(j=0;j<n;j++)
    {
        if(!visited[j]&&G[i][j]==1)
        DFS(j);
    }
}
