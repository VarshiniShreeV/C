/*
Pattern
    5
   45
  345
 2345
12345
*/

#include <stdio.h>

void main(){
    int n;
    scanf("%d",&n);

    for (int row=1;row<=n;row++,printf("\n")){
        for (int space=row;space<n;space++){
            printf(" ");
        }
        for (int col=(n-row)+1;col<=n;col++){
            printf("%d",col);
        }
    }
}