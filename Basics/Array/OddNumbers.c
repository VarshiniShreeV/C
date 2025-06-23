//Linear Search


#include <stdio.h>

void main(){

    int n,sum=0,flag=0,key;
    scanf("%d",&n);
    int a[n];

    //Input
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    //Odd  Numbers
    for (int i=0;i<n;i++){
        if (a[i]%2!=0) printf("%d ",a[i]);
    }
}