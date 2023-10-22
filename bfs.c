#include <Stdio.h>
int a[20][20],visited[20],q[20],n,i,j,f=0,r=-1;

void bfs(int v)
{
    if(!visited[v])
    {
        printf("Tasversed %d\n",v);
        visited[v] =1;
        for(i= 1; i<=n; i++)
        {
            if(a[v][i]==1 && !visited[v])
                q[++r]= i;
        }
        if(f<=r);
        bfs(q[f++]);
    }
}
int main()
{
    int v;
    printf("enter nodes number ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        q[i]=0;
        visited[i]=0;
    }

    printf("entrer graph\n ");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            scanf("%d ",&a[i][j]);
        }

    }
    printf("\n enter the starting vertex ");
    scanf("%d",&v);
    bfs(v);
    printf("\n the node which are reachable are \n");
    return 0;

}









