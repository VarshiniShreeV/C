#include <stdio.h>
#include <math.h>

int reverse(int num){
    int rem,rev=0;
    while (num){
        rem = num%10; 
        rev = rev*10 + rem; 
        num/=10;
    }
    return rev;
    }

int count(int num){
    int c=0;
    while(num){
        c++;
        num/=10;
    }
    return c;
}

void main(){
    int n,evensum=0,oddsum=0,odd=0,even=0,sum=0;
    scanf("%d",&n);
    int temp=n;

    int p = pow(10,count(n)-1);

    while(n){
        int q=(n/p);
        if (q%2==0){
            even = even*10 +q;
            evensum+=q;}
        else {
            odd = odd*10+q;
            oddsum+=q;}
        n%=p;
        p/=10;
    }

    int odd_count = count(odd);
    int even_count = count(even);

    
    printf("Sum %d\nEven Digits Sum %d\nOdd Digits Sum %d\nA number of even digits %d\nA number of odd digits %d\nEven Number Reverse %d\nOdd Number Reverse %d",evensum+oddsum,evensum,oddsum,even,odd,reverse(even),reverse(odd));
}