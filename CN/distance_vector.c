#include <stdio.h>
#define INF 999
int main() {
    int n,c[10][10],d[10][10],i,j,k,change;
    printf("Enter number of nodes (max 10): "); scanf("%d",&n);
    printf("Enter cost matrix (999 for no link):\n");
    for(i=0;i<n;i++) for(j=0;j<n;j++) {
        scanf("%d",&c[i][j]); d[i][j]=c[i][j];
    }
    do {
        change=0;
        for(i=0;i<n;i++) for(j=0;j<n;j++) for(k=0;k<n;k++)
            if(d[i][k]<INF && d[k][j]<INF && d[i][k]+d[k][j]<d[i][j]) {
                d[i][j]=d[i][k]+d[k][j]; change=1;
            }
    } while(change);
    for(i=0;i<n;i++) {
        printf("\\nRouting table for node %d\\nDestination  Cost\\n",i);
        for(j=0;j<n;j++)
            if(d[i][j]>=INF) printf("%d            Unreachable\\n",j);
            else printf("%d            %d\\n",j,d[i][j]);
    }
    return 0;
}
