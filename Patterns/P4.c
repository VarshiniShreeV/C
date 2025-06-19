/*
Pattern
55555
55515
55525
55535
55545
*/

#include <stdio.h>

void main(){
    int n;
    scanf("%d",&n);
    for (int row=1;row<=n;row++,printf("\n")){
        for (int col=1;col<=n;col++){
            if (col==n-1 && row!=1){
                printf("%d",row-1);
            }
            else{
                printf("%d",n);
            }
        }
    }
}