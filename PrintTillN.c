#include <stdio.h>
#include <stdlib.h>

void main(){
    int arr[100];
    int i=0,c=0;
    int input;
    while(1){
        scanf("%d",&input);
        if (input!=-1) {arr[i++]=input;c++;}
        else break;
    }
    int j=0;
    while(j<c){
        printf("%d",arr[j]);
        j++;
    }
}