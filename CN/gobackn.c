#include <stdio.h>
int main() {
    int n,w,i,ack,end;
    printf("Enter number of frames and window size: ");
    scanf("%d%d",&n,&w);
    i=1;
    while(i<=n) {
        end=i+w-1; if(end>n) end=n;
        printf("Sending frames %d to %d\n",i,end);
        printf("Enter last acknowledged frame number: ");
        scanf("%d",&ack);
        if(ack>=i-1 && ack<=end) i=ack+1;
        else printf("Timeout: resend from frame %d\n",i);
    }
    printf("All frames acknowledged.\n");
    return 0;
}
