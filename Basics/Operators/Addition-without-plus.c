//13.06.2025

// Addition of 2 numbers without arithmetic operators 

#include <stdio.h>

void main(){
    int n1,n2,carry;
    printf("Enter Numbers: ");
    scanf("%d %d", &n1, &n2);

    while (n2!=0){
        carry = (n1&n2)<<1;
        n1=n1^n2;
        n2=carry;
    }
    printf("Sum : %d",n1);
}