#include <stdio.h>

void selectionSort(int *a, int size){
    if (size==1) return;
    for (int i=0;i<size;i++){
        int min = i;
        for (int j=i+1;j<size;j++){
            if (a[min]>a[j]) min = j;
        }
        if (min!=i){
            int temp = a[min];
            a[min]=a[i];
            a[i]=temp;
        }
    }
}

void main(){
    int a[] = {5,8,0,2,1};
    selectionSort(a,5);
    for (int i=0;i<5;i++) printf("%d ",a[i]);
}