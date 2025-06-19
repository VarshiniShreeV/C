//12.06.2025

// Check if  a number is positive, negative or zero

#include <stdio.h>

void main()
{
    int n;
    scanf("%d", &n);
    if (n>0) printf("Positive");
    else if (n<0) printf("Negative");
    else printf("Zero");
    //(n1==0) ? printf("Zero") : (n1>0) ? printf("Positive") : printf("Negative");
}