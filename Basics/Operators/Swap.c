//11.06.2025

//Swap two numbers with a temporary variable

#include <stdio.h>

void main(){
    int n1,n2,temp;
    printf("Enter first number:");
    scanf("%d", &n1);
    printf("Enter second number:");
    scanf("%d", &n2);
    temp = n1;
    n1 = n2;
    n2 = temp;
    printf("First Number:%d\n", n1);
    printf("Second Number:%d", n2);
}

/*
#include <stdio.h>

//Swap two numbers without a temporary variable

void main(){
    int n1,n2,temp;
    printf("Enter first number:");
    scanf("%d", &n1);
    printf("Enter second number:");
    scanf("%d", &n2);
    n1 = n1+n2 - n1;
    n2 = n1+n2 - n2;
    printf("First Number:%d\n", n1);
    printf("Second Number:%d", n2);
}

*/