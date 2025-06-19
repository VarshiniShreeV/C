// Pyramid Pattern using asterisk

#include <stdio.h>

void main(){
    int n;
    scanf("%d",&n);
    for (int row=1;row<=n;row++,printf("\n")){
        for (int space=row+1;space<=n;space++){
            printf(" ");
        }
        for (int col=1;col<=row;col++){
            printf("*");
        }
        for (int col1=1;col1<row;col1++){
            printf("*");
        }
    }
}