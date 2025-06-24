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

    int b[r][c];
    printf("\nSecond Matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }

    int d[r][c];
    for(i=0;i<r;i++,printf("\n")){
        for(j=0;j<c;j++){
            d[i][j]=0;
            for (int k=0;k<c;k++){
                d[i][j] += (a[i][k]*b[k][j]);
            }
        }
    }

    printf("\nMultiplied Matrix:\n");
    for(i=0;i<r;i++,printf("\n")){
        for(j=0;j<c;j++){
            printf("%d ",d[i][j]);
        }
    }
}