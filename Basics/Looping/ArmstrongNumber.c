// Armstrong Number => Number == Sum of power(digit count in a number) of each digit of the number

#include <stdio.h>
#include <math.h>

void main(){
    int n,sum=0,rem,temp,count=0;
    scanf("%d",&n);
    temp=n;

    while(n){
        n/=10;
        count++;
    }
    n=temp;

    while(n!=0){
        rem = n%10;
        sum+=pow(rem,count);
        n/=10;
    }
    if (sum==temp) printf("Armstrong Number");
    else printf("Not a armstrong number");

}