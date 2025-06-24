#include <stdio.h>

int sort(int arr[],int s, int e){
    for (int i = s;i<e;i++){
        for (int j = i+1; j<e ;j++){
            if (arr[j]<arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void main(){
    int a[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(a)/sizeof(a[0]);

    int i=0,j=size-1,temp;

    while (i<j){
        if (a[i]%2==0){
            if (a[j]%2!=0){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                i++;
                j--;
            }
            else if(a[j]%2==0) j--;
        }
        else i++;
    }

    for (int k=0;k<size;k++) printf("%d ",a[k]);
    printf("%d",i);
    sort(a,0,i);
    sort(a,i,size);
    printf("SORTED:");
    for (int k=0;k<size;k++) printf("%d ",a[k]);
}