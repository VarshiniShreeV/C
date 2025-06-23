// Happy Number : Eventually reaches 1 when replaced by the sum of the square of each digit repeatedly.

#include <stdio.h>

 int sq_sum(int num){
    int q,sum=0;
    while(num){
        q=num%10;
        sum+= (q*q);
        num/=10;
    }
    return sum;
}

void main(){
    int n,flag=0,val=0;
    scanf("%d",&n);

    val = sq_sum(n);

    while (val!=1 && val!=4){
            val = sq_sum(val);
    }

    (val==1) ? printf("Happy Number") : printf("Not a happy Number!") ;
}

