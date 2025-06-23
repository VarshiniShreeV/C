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

    //Print
    for (int i=0;i<n;i++){
        printf("%d Index: %d\n",a[i],i);
    }

    //Linear Search
    scanf("%d",&key);
    for (int i=0;i<n;i++){
        if (a[i]==key) flag=1;
    }
    if (flag == 1) printf("Found!");
    else printf("Not Found!");
}