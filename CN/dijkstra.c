#include <stdio.h>
#define INF 9999
int main() {
    int n,a[10][10],d[10],vis[10]={0},i,j,u,v,min,src;
    printf("Enter number of vertices (max 10): "); scanf("%d",&n);
    printf("Enter adjacency matrix (0 means no edge):\n");
    for(i=0;i<n;i++) for(j=0;j<n;j++) scanf("%d",&a[i][j]);
    printf("Enter source vertex (0 to %d): ",n-1); scanf("%d",&src);
    for(i=0;i<n;i++) d[i]=INF;
    d[src]=0;
    for(i=0;i<n;i++) {
        min=INF; u=-1;
        for(j=0;j<n;j++) if(!vis[j] && d[j]<min) min=d[j],u=j;
        if(u==-1) break;
        vis[u]=1;
        for(v=0;v<n;v++)
            if(a[u][v]>0 && !vis[v] && d[u]+a[u][v]<d[v])
                d[v]=d[u]+a[u][v];
    }
    printf("Vertex  Distance\n");
    for(i=0;i<n;i++)
        if(d[i]==INF) printf("%d       Unreachable\n",i);
        else printf("%d       %d\n",i,d[i]);
    return 0;
}
