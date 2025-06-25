// Adam number => Square of a number == Reverse of square of the reversed number

//Adam's Number

#include <stdio.h>

int reverse(int n){
    int r,rev=0;
    while(n){
        r=n%10;
        rev=(rev*10)+r;
        n/=10;
    }
    return rev;
}

void main(){
    int n,flag=0;
    scanf("%d",&n);
    int rev = reverse(n);
    if ((n*n)==(reverse(rev*rev))) printf("Adam's Number");
    else printf("Not Adam's Number");
    
}

/*
#include <stdio.h>

void main(){
    int n,sq,rem,rev=0,rev_sq,rev_sq_rem,rev_sq_rev;
    scanf("%d", &n);
    sq = n*n;

    while (n!=0){
    rem=n%10;
    rev=rev*10+rem;
    n/=10;
    }
    rev_sq=rev*rev;
    while(rev_sq!=0){
        rev_sq_rem=rev_sq%10;
        rev_sq_rev=rev_sq_rev*10+rev_sq_rem;
        rev_sq/=10;
    }
    if (sq==rev_sq_rev) printf("Adam Number");
    else printf("Not a Adam Number");
}
*/