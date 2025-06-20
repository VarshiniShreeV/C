// Count teh number of digits in a number

#include <stdio.h>

void main(){
    int n,c;
    scanf("%d", &n);

    while (n!=0){
        n/=10;
        c++;
    }
    printf("%d",c);
}