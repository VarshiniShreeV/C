#include <stdio.h>

void main(){
    int a[100]={1,2,3,4,5};
    int r,n=5;
    scanf("%d",&r);

    while(r!=0){
        int temp=a[n-1];
        for (int i=n-2;i>=0;i--) a[i+1]=a[i]; //i=n-1 => a[i]=a[i-1]
        a[0]=temp;
        r--;
    }
    for (int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}