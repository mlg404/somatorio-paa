#include <stdio.h>
#include <stdlib.h>

int a(int **matriz, int m, int n){
    int i, j,soma=0;
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            soma += matriz[i][j];
        }
    }
    return soma;
}
int b(int **matriz, int m, int n){
    int i, j,soma=0;
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            soma += matriz[j][i];
        }
    }
    return soma;
}
int c(int **matriz, int m, int n){
    int i, j,soma=0;
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
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
            soma += matriz[i][i];
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
int f(int **matriz, int m, int n){
    int i, j,soma=0;
    for (i = 0; i < m; i++){
        for (j = i; j < n; j++){
            soma += matriz[i][j];
        }
    }
    return soma;
}
int g(int **matriz, int m){
    int i, j,soma=0;
    for (i = 0; i < m; i++){
        for (j = 0; j < i; j++){
            soma += matriz[i][j]*matriz[j][i];
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

    //exercício a
    printf("\nResposta letra a: %d", a(matriz,m,n));
    //exercício b
    printf("\nResposta letra b: %d", b(matriz,m,n));
    //exercício c
    printf("\nResposta letra c: %d", c(matriz,m,n));
    //exercício d
    printf("\nResposta letra d: %d", d(matriz,m));
    //exercício e
    printf("\nResposta letra e: %d", e(matriz,m));
    //exercício f
    printf("\nResposta letra f: %d", f(matriz,m,n));
    //exercício g
    printf("\nResposta letra g: %d", g(matriz,m));

}