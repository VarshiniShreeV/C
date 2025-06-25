#include <stdio.h>
#include <string.h>

void main(){
    char str1[100];
    int flag=0;
    printf("enter a string: ");
    scanf(" %[^\n]",str1);
    int size;

    for (size=0;str1[size];size++);

    for (int i=0;i<size;i++){
        if (str1[i] == str1[size-i-1]){
            flag=1;
        }
        else 
        {
            flag=0;
            break;
        }
    }
    if (flag==1) printf("Palindrome");
    else printf("Not a palindrome");
}