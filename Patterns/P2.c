/*
Pattern

54321
43212
32123
21234
12345
*/ 

#include <stdio.h>

void main(){
    int n;
    scanf("%d", &n);

    for (int row=n;row>=1;row--,printf("\n")){
        for (int col=row;col>1;col--){
            printf("%d ",col);
        }
        for (int col1=1;col1<=n-(row-1);col1++){
            printf("%d ",col1);
        }
    }
}