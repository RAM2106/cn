#include <stdio.h>
int main() {
    int n,i,ack;
    printf("Enter number of frames: "); scanf("%d",&n);
    for(i=1;i<=n;i++) {
        printf("Sending frame %d\n",i);
        printf("ACK received? (1=yes, 0=no): "); scanf("%d",&ack);
        if(!ack) { printf("Timeout, resend frame %d\n",i); i--; }
        else printf("Frame %d acknowledged\n",i);
    }
    printf("All frames sent.\n");
    return 0;
}
