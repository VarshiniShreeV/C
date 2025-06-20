// Sum of Factorial of each digits of a number

#include <stdio.h>

void main(){
    int n,rem,fact,sum=0;
    scanf("%d", &n);

    while (n!=0){
        rem = n%10;
        
        fact = 1;
        while(rem!=0){
            fact*=rem;
            rem--;
        }
        sum+=fact;
        n/=10;
    }
    printf("Sum : %d", sum);
}