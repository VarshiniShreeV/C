// Print of odd digits in a given number

#include <stdio.h>

void main(){
    int n, rem,sum=0;
    scanf("%d", &n);

    while (n!=0){
        rem = n%10;
        if (rem%2!=0){
            printf("%d ", rem);
            sum+=rem;
        }
        n/=10;
    }
    printf("\nSum : %d", sum);
}