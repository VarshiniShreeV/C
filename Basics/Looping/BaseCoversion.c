// Base Conversions

#include <stdio.h>

void main(){
    int n,b;
    printf("Enter Number:");
    scanf("%d",&n);
    printf("\nEnter it's base:");
    scanf("%d",&b);
    printf("%d",n);
    while (n>b){
        printf("%d",n%b);
        n/=b;
    }
    printf("%d",n);
}