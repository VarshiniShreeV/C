// If we can divide the square of the number into two parts such that their sum equals the original number, and neither part is zero, then the number is a Kaprekar number

#include <stdio.h>

void main(){
    int n,sq,p=10,temp,q,rem,flag=0;
    scanf("%d",&n);
    sq=n*n;
    temp=sq;
    printf("%d",sq);

    while(temp){
        q=temp/p;
        rem=temp%p;

        if ((q+rem)==n){
            flag=1;
            break;
        }
        p*=10;
    }
    if (flag==1) printf("Yes");
    else printf("No");
}