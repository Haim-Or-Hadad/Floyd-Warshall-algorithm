#include <stdio.h>
#include "my_mat.h" 

void shortestPath_mat(int mat[10][10]){
        for(int u=0;u<10;u++){
            for(int v=0;v<10;v++){
                for(int k=0;k<10;k++){
                    if(mat[k][v]> mat[v][u] + mat[u][k])
                        mat[k][v] = mat[v][u] + mat[u][k];
                }
            }
        }
}




void funcA(int mat [10][10]){
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
        {
            scanf("%d",&mat[i][j]);
        }
}

void funcB(int mat [10][10],int i,int j){
    if(mat[i][j]!=0){
        printf("True");
    }
    else 
        printf("False");
}

void funcC(int mat [10][10],int i,int j){
    if(mat[i][j]!=0){
        printf("%d",mat[i][j]);
    }else{
        printf("-1");
    }
}
