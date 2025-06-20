// Reverse the given number 

#include <stdio.h>

void main(){
    int n,rem,rev=0,temp;
    scanf("%d", &n);
    temp=n;

    while (n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if (temp==rev) printf("Palindrome");
    else printf("Not a palindrome");
}