/*
Pattern
Diagonal X
X   X
 X X 
  X  
 X X 
X   X
*/

#include <stdio.h>

void main(){
    int n;
    scanf("%d",&n);

    for (int row=1;row<=n;row++,printf("\n")){
        for (int col=1;col<=n;col++){
            if (col == row || col == (n - (row-1)/*(n-row)+1*/)){
                printf("X");
            }
            else{
                printf(" ");
            }
        }
    }
}