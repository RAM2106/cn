#include <stdio.h>
#include <string.h>
int main() {
    char s[100], out[220]; int i, j=0;
    printf("Enter data (F=flag, E=escape): ");
    scanf("%99s", s);
    out[j++]='F';
    for(i=0;s[i];i++) {
        if(s[i]=='F' || s[i]=='E') out[j++]='E';
        out[j++]=s[i];
    }
    out[j++]='F'; out[j]='\0';
    printf("Stuffed data: %s\n", out);
    return 0;
}
