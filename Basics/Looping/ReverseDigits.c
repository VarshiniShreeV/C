// Reverse the digits of a number

#include <stdio.h>

void main(){
    int n;
    scanf("%d", &n);

    while (n!=0){
        printf("%d ", n%10);
        n/=10;
    }
}