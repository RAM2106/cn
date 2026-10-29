#include <stdio.h>
int main() {
    int n,w,i,j,ack,end;
    printf("Enter number of frames and window size: ");
    scanf("%d%d",&n,&w);
    for(i=1;i<=n;i+=w) {
        end=i+w-1; if(end>n) end=n;
        printf("Sending frames %d to %d\n",i,end);
        for(j=i;j<=end;j++) {
            printf("Frame %d acknowledged? (1=yes, 0=no): ",j);
            scanf("%d",&ack);
            if(!ack) printf("Resend frame %d\n",j);
        }
    }
    printf("Transmission complete.\n");
    return 0;
}
