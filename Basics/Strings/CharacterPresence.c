#include <stdio.h>
#include <string.h>

void main(){
    char str[100],key;
    int flag=0;
    printf("Enter the string : ");
    scanf(" %[^\n]",str);
    printf("Enter the search key : ");
    scanf(" %c",&key);

    for (int i=0;str[i];i++){
        if (str[i]==key) {flag=1;break;}
    }
    if (flag==1) printf("Present");
    else printf("Not present");
}