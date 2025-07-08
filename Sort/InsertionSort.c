#include <stdio.h>

void insertionSort(int *a, int size){
    for (int i=1;i<size;i++){
        int j=i-1;
        while(j>=0 && (a[j]>a[j+1])){
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
            j--;
        }
    }
}

void main(){
    int a[] = {5,8,0,2,1};
    insertionSort(a,5);
    for (int i=0;i<5;i++) printf("%d ",a[i]);
}