// Remove => % 
// Access => /

#include <stdio.h>
#include <math.h>

void main(){
    int n,temp,count=0;
    scanf("%d",&n);
    temp=n;

    while (n){
        count++;
        n/=10;
    }

    int p= pow(10,count-1);

    while(temp){
        printf("\n%d",temp/p);
        temp%=p;
        p/=10;
    }
}