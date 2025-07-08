#include <stdio.h>

void main(){
    int a[100] = {1,2,3,4,5};
    int n = 5;
    int r;
    scanf("%d",&r);

    while(r!=0){
        int temp=a[0];
        for (int i=0;i<n-1;i++) a[i]=a[i+1];
        a[n-1] = temp;
        r--;
    }
    
    for (int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

