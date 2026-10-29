#include <stdio.h>
#include <string.h>
void crc(char data[], char poly[]) {
    char t[300]; int i,j,n=(int)strlen(data),m=(int)strlen(poly);
    strcpy(t,data);
    for(i=0;i<m-1;i++) t[n+i]='0';
    t[n+m-1]='\0';
    for(i=0;i<n;i++)
        if(t[i]=='1')
            for(j=0;j<m;j++)
                t[i+j]=(t[i+j]==poly[j])?'0':'1';
    printf("Remainder: ");
    for(i=n;i<n+m-1;i++) printf("%c",t[i]);
    printf("\n");
}
int main() {
    char data[200];
    printf("Enter data bits: "); scanf("%199s",data);
    printf("CRC-12 "); crc(data,"1100000001111");
    printf("CRC-16 "); crc(data,"11000000000000101");
    printf("CRC-CCITT "); crc(data,"10001000000100001");
    return 0;
}
