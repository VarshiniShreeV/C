#include <stdio.h>
#include <string.h>

void main(){
    char str1[100],str2[100];
    int len1;
    printf("Enter String 1: ");
    scanf(" %[^\n]",str1);
    printf("\nEnter String 2: ");
    scanf(" %[^\n]",str2);

    for (len1=0;str1[len1];len1++);

    for (int i=0;str2[i];i++){
        str1[len1++] = str2[i];
    }
    str1[len1]='\0';

    printf("\n%s",str1);
}