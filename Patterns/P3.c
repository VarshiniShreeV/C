/*
Pattern
    1
   121
  12321
 1234321
123454321
*/

#include <stdio.h>

void main(){
    int n;
    scanf("%d", &n);

    for (int row=1;row<=n;row++, printf("\n")){
        for (int space=row;space<n;space++){
            printf(" ");
        }
        for (int col1=1;col1<=row;col1++){
            printf("%d",col1);
        }
        for (int col2=1;col2<=row-1;col2++){
            printf("%d",col2);
        }
    }
}