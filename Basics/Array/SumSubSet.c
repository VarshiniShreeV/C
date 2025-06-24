#include <stdio.h>

void main(){
    int a[] = {0,1,2,3,4,2,3,3};
    int sum = 6;
    int size = sizeof(a)/sizeof(a[0]);

    for (int i=0;i<size;i++){
        int check=a[i];
        for (int j=i+1;j<size;j++){
            check += (a[j]);
            
            if (check==sum) {
                int count=0;
                for (int k=i;k<=j;k++){
                    printf("%d ",a[k]);
                    count++;
                }
                printf("COUNT:%d\n",count);
                break;
            }
            else if (check>sum) break;
        }
    }
}