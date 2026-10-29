#include <stdio.h>
int main() {
    int n,i,x,sum=0;
    printf("Number of bytes: "); scanf("%d",&n);
    for(i=0;i<n;i++) {
        printf("Enter byte (0-255): "); scanf("%d",&x);
        sum += x;
        sum = (sum & 255) + (sum >> 8);
    }
    printf("Checksum: %02X\n", (~sum)&255);
    return 0;
}
