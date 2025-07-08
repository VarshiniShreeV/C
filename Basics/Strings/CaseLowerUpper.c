#include <stdio.h>
#include <string.h>

void main(){
    char c[100];
    scanf(" %[^\n]",c);
    for (int i=0;c[i];i++){
        if (c[i]>=65 && c[i]<=90) printf("%c",c[i]+32);
        else if (c[i]>=97 && c[i]<=122) printf("%c",c[i]-32);
        else printf("%c",c[i]);
    }
}