#include <stdio.h>
int main() {
    int size,rate,n,p,bucket=0,i;
    printf("Enter bucket capacity and output rate: ");
    scanf("%d%d",&size,&rate);
    printf("Enter number of packets: "); scanf("%d",&n);
    for(i=1;i<=n;i++) {
        printf("Enter packet size: "); scanf("%d",&p);
        if(p<=size-bucket) { bucket+=p; printf("Packet accepted\n"); }
        else printf("Packet dropped\n");
        if(bucket>=rate) bucket-=rate; else bucket=0;
        printf("Remaining in bucket: %d\n",bucket);
    }
    return 0;
}
