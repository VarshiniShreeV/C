// Adjacency matrix
// Inputs : Vertices, Edges

#include <stdio.h>

void main(){
    int a[100][100],v,e;
    scanf("%d %d",&v,&e);

    for (int i=0;i<v;i++){
        for (int j=0;j<v;j++){
            a[i][j]=0;
        }
    }

    for (int i=0;i<e;i++){
        int u,vtx;
        scanf("%d %d",&u,&vtx);

        a[u][vtx]=1; //Undirected Graph
        a[vtx][u]=1; //Directed Graph
    }

    for (int i=0;i<v;i++,printf("\n")){
        for (int j=0;j<v;j++){
            printf("%d ",a[i][j]);
        }
    }

}