#include <stdio.h>
void DFS(int);
int g[10][10],visited[10],n;
int main()
{
 int i,j;
 printf("\n Enter number of vertices");
 scanf("%d",&n);
 printf("\n enter adjecency matrix of the graph");
 for(i=0;i<n;i++)
 {
 for(j=0;j<n;j++)
 {
 scanf("%d",&g[i][j]);
 }

 visited[i]=0;
 DFS(0);

 }

 return 0;
}
void DFS(int i)
{
 int j;
 printf("\n %d",i);
 for(j=0;j<n;j++){
 if(!visited[j]&&g[i][j]==1){
 DFS(j);
 }
 }
}
