/*
Hollow Square Pattern
*****
*   *
*   *
*   *
*****
*/

#include <stdio.h>

void main(){
    int n;
    scanf("%d",&n);
    for (int row=1;row<=n;row++,printf("\n")){
        for (int col=1;col<=n;col++){
            if (row==1 || col==1 || row ==n || col==n ){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
    }
}