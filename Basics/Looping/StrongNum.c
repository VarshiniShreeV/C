// Sum of Factorial of each digits of a number == Number => Strong Number

#include <stdio.h>

void main(){
    int n,rem,fact,sum=0,temp;
    scanf("%d", &n);
    temp=n;

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
    printf("%d \n",sum);
    if (sum==temp) printf("Strong Number");
    else printf("Not a strong number");
}