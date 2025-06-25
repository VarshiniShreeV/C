#include <stdio.h>
#include <string.h>

void main(){
    char str1[100],str2[100];
    printf("Enter a string: ");
    scanf(" %[^\n]",str1);
    
    //Copy
    for (int i=0;str1[i];i++){
        str2[i]=str1[i];
    }

    printf("%s",str2);
}