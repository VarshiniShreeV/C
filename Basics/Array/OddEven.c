#include <stdio.h>

void main(){
    int a[] = {3,5,2,3,4,6,1,7,2,4,8};
    int size = sizeof(a)/sizeof(a[0]);

    int temp;

    int i=0,j=-1;

    while (i!=j){
        if (a[i]%2==0 && a[j]%2!=0){
            printf("\n%d %d", a[i],a[j]);
            temp = a[i];
            a[i]=a[j];
            a[j]=temp;
            printf("\n%d %d", a[i],a[j]);
        }
        i++;
        j--;
    }

    for (int i;i<size;i++){
        printf("%d\n",a[i]);
    }
}