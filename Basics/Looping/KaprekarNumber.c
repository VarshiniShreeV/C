// If we can divide the square of the number into two parts such that their sum equals the original number, and neither part is zero, then the number is a Kaprekar number

#include <stdio.h>

void main(){
    int n,p=10,sq,q,rem,flag=0;
    scanf("%d",&n);
    sq=n*n;
    printf("%d",sq);

    while(p<sq){
        q=sq/p;
        rem=sq%p;

        if (rem!=0 && (q+rem)==n){
            flag=1;
            break;
        }
        if (q==0) break;
        else p*=10;
    }
    if (flag==1) printf("\nYes");
    else printf("\nNo");
}