#include <stdio.h>

void main(){
    int n,sum=0;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    for (int i=0;i<n;i++){
        sum+=a[i];
    }
    printf("Sum:%d",sum);
    
}