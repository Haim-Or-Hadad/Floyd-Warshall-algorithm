#include <stdio.h>
#include "my_mat.h"

int mat[10][10];

int min(int a,int b){
    if (a>b) {
        return a;}
    else {
         return b;
        }
    }

void shortestPath_mat(){
        for(int u=0;u<10;u++){
            for(int v=0;v<10;v++){
                for(int k=0;k<10;k++){
                    if(mat[v][k]!=0 && mat[v][u]!=0 && mat[u][k]!=0){
                        mat[v][k]=min(mat[v][k],mat[v][u]+mat[u][k]);
                    }
                    if(v!=k&&mat[v][k]==0 && mat[v][u]!=0 && mat[u][k]!=0){
                           mat[v][k]=mat[v][u]+mat[u][k];
                    }
            
            }
        }
    }
}



void funcA(){
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    shortestPath_mat();
}



void funcB(){
    int i , j;
    scanf("%d %d",&i,&j);
    if(mat[i][j]!>0){
        printf("True\n");
    }
    else 
        printf("False\n");
}

void funcC(){
    int i,j;
    scanf("%d %d", &i, &j);
    if(mat[i][j]!=0){
        printf("%d\n",mat[i][j]);
    }
    else{
        printf("-1\n");
        }
}
