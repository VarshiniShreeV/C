#include <stdio.h>
#include <string.h>

void main(){
    char str1[100];
    printf("enter a string: ");
    scanf(" %[^\n]",str1);
    int size;

    for (size=0;str1[size];size++);

    char str2[size+1];
    for (int i=0;i<size;i++){
        str2[i] = str1[size-i-1];
    }
    str2[size] = '\0';
    printf("%s",str2);
}