#include <stdio.h>
int main() {
    int b[8]={0},i;
    printf("Enter 4 data bits separated by spaces: ");
    scanf("%d%d%d%d",&b[3],&b[5],&b[6],&b[7]);
    b[1]=b[3]^b[5]^b[7];
    b[2]=b[3]^b[6]^b[7];
    b[4]=b[5]^b[6]^b[7];
    printf("Hamming code: ");
    for(i=1;i<=7;i++) printf("%d",b[i]);
    printf("\n");
    return 0;
}
