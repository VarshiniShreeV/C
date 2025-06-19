#include <stdio.h>

void main(){
    int num, fact=1,sum=0;
    scanf("%d",&num);

    //Sum of factorials
    for (int i=1;i<=num;i++){
        fact = fact*i;
        sum+=fact;
    }
    printf("Sum %d",sum);
}