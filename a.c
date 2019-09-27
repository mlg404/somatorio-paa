#include <stdio.h>
#include <stdlib.h>

int a(int **matriz, int m){
    int i, j,soma=0;
    for (i = 0; i < m; i++){
        for (j = 0; j < m; j++){
            soma += matriz[i][j];
        }
    }
    return soma;
}
int b(int **matriz, int m){
    int i, j,soma=0;
    for (i = 0; i < m; i++){
        for (j = 0; j < m; j++){
            soma += matriz[j][i];
        }
    }
    return soma;
}
int c(int **matriz, int m){
    int i, j,soma=0;
    for (i = 0; i < m; i++){
        for (j = 0; j < m; j++){
           if (i != j){
               soma += matriz[i][j];
           }
        }
    }
    return soma;
}
int d(int **matriz, int m){
    int i, j,soma=0;
    for (i = 0; i < m; i++){
        for (j = 0; j < m; j++){
           if (i == j){
               soma += matriz[j][i];
           }
        }
    }
    return soma;
}
int e(int **matriz, int m){
    int i, j,soma=0;
    for (i = 0; i < m; i++){
        for (j = 0; j < i; j++){
            soma += matriz[i][j];
        }
    }
    return soma;
}
int f(int **matriz, int m){
    int i, j,soma=0;
    for (i = 0; i < m; i++){
        for (j = 0; j < i; j++){
            soma += matriz[i][j];
        }
    }
    return soma;
}
void main(){
    FILE *entrada;
    int aux,m,n,i,j, **matriz;

    entrada = fopen("matriz.txt", "r");
    fscanf(entrada, "%d %d", &m, &n);

    matriz = (int**)malloc(sizeof(int*)*m);
    for(i=0;i<m;i++){
	    matriz[i] = (int*)malloc(sizeof(int)*m);
    }
    //pega a matriz
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            fscanf(entrada, "%d", &matriz[i][j]);
        }
    }

    //exibe a matriz
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }


    
}