/*
If odd rows, print odd values and vice versa for even values

1 
2 4 
1 3 5 
2 4 6 8 
1 3 5 7 9
2 4 6 8 10 12
1 3 5 7 9 11 13
*/

#include <stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    for (int row = 1;row<=n;row++,printf("\n")){
        if (row%2==0){
            int e=2;
            for (int col=row;col>=1;col--,e+=2){
            printf("%d ",e);
            }
        }
        else{
            int o=1;
            for (int col=row;col>=1;col--,o+=2){
                printf("%d ",o);
            }
        }
    }
}