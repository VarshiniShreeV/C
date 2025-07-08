#include <stdio.h>

void main(){
    int n=5;
    int a[100] = {1,2,3,4,5};
    int pos = 2;

    for (int i=pos;i<n;i++) a[i]=a[i+1];

    for (int i=0;i<n-1;i++) printf("%d ",a[i]);
}