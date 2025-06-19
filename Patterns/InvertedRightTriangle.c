// Inverted Right angled triangle Star pattern

#include <stdio.h>

void main(){
    int n;
    scanf("%d",&n);
    for (int i=n;i>=1;i--, printf("\n")){
        for (int j=i;j>=1;j--)
            printf("* ");
    }
}