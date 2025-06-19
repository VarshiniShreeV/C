/*
Pattern
5 
5 4
5 4 3
5 4 3 2 
5 4 3 2 1
*/

#include <stdio.h>

void main(){
    int n;
    scanf("%d",&n);
    for (int row=1;row<=n;row++,printf("\n")){
        for (int col=n;col>=row;col--){
            printf("%d ", col);
        }
    }
}