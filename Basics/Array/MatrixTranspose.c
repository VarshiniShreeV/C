#include <stdio.h>

void main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int i=0,j=0;

    int a[r][c];
    printf("\nFirst Matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }


    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp; 
        }
    }

    printf("\nTranspose Matrix:\n");
    for(i=0;i<r;i++,printf("\n")){
        for(j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
    }
}