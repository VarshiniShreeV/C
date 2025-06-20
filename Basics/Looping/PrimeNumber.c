// Print the prime digits in the given number

// Prime range : 2 to n or 2 to n/2 or 2 to square root of n

// If there is a yes or no condition or check or verify, use flags

#include <stdio.h>

void main(){
    int n,rem;
    scanf("%d",&n);

    while(n!=0){
        rem=n%10;
        /*
        int flag=1;
        for (int num=2;num<rem;num++){
            if(rem%num==0){
                flag=0;
                break;
            }
        }
        if (flag==1) printf("%d",rem);
        */
        if (rem==2 || rem==3 || rem==5 || rem==7)  printf("%d ",rem); 
        n/=10;
    }
}