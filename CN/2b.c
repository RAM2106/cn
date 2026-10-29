#include <stdio.h>
int main() {
    char s[100], out[200]; int i,j=0,ones=0;
    printf("Enter bit string: ");
    scanf("%99s", s);
    for(i=0;s[i];i++) {
        out[j++]=s[i];
        if(s[i]=='1') ones++; else ones=0;
        if(ones==5) { out[j++]='0'; ones=0; }
    }
    out[j]='\0';
    printf("Stuffed bits: %s\n", out);
    return 0;
}
