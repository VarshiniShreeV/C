#include <stdio.h>

void bubbleSort(int a[],int size){
    for (int i=0;i<size;i++){
        for(int j=0;j<size-i+1;j++){
            if (a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void main(){
    int n;
    scanf("%d",&n);
    printf("%d",n);
    int a[n];
    for (int i=0;i<n;i++) scanf("%d",&a[i]);
    bubbleSort(a,n);
    for (int i=0;i<n;i++) printf("%d ",a[i]);
}