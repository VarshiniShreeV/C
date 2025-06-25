// Armstrong Number => Number == Sum of power(digit count in a number) of each digit of the number


#include <stdio.h>
#include <math.h>

int count(int n){
    int c = 0;
    while(n){
        c++;
        n/=10;
    }
    return c;
}

void armstrong(int n){
    int sum=0,temp=n,c=count(n);
    while(n){
        sum+=pow(n%10,c);
        n/=10;
    }
    if (temp==sum) printf("Armstrong Number");
    else printf("Not a Armstrong Number");
}

void main(){
    int n,c=0,sum=0;
    scanf("%d",&n);
    armstrong(n);
}
/*
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
*/