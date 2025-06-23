#include <stdio.h>

void main(){
    int a[] = {1,2,3};
    int size = sizeof(a)/sizeof(a[0]);

    int b[size];

    //Copy
    for (int i=0;i<3;i++){
        b[i] = a[i];
    }

    //Print
    for (int i=0;i<3;i++){
        printf("%d\n",b[i]);
    }
}