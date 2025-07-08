#include <stdio.h>

int binarySearch(int *arr,int n, int key){
    int l=arr[0];
    int h=arr[n-1];
    while(l<h){
        int mid = (l+h)/2;
        if (mid==key) printf("Found");
        else{
            if (arr[mid]<key) h=mid-1;
            else l=mid+1;
        }
    }
    for (int i=0;i<n;i++);
    return 0;
}

void main(){
    int arr[10] = {11,22,33,44,55,66,77};
    int n=7;
    binarySearch(arr,n,77);
}