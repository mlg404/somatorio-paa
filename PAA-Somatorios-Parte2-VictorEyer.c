#include <stdio.h>
#include <stdlib.h>

int h(int **matriz, int m, int n){
    int i, j,soma=0;
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            soma += matriz[i][j];
        }
    }
    return soma;
}
int ii(int **matriz, int i, int n){
    int j, soma=0;
    for (j = 0; j < n; j++){
        soma += matriz[i][j];
    }
    return soma;
}
int jj(int **matriz, int j, int n){
    int i, produto=1;
    for (i = 0; i < n; i++){
        produto = produto*matriz[i][j];
    }
    return produto;
}
void main(){
    FILE *entrada;
    int aux,m,n,i,j,ordem, **matriz,x;

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

    //exercício h
    printf("Informe um valor para x: ");
    scanf("%d", &x);
    printf("\nResposta letra h: %d", h(matriz,m,n)*x);
    //exercício i
    int vetV[m];
    for (i = 0; i < m; i++){
        vetV[i] = ii(matriz,i,n);
        
    }
    printf("\nResposta letra i: ");
    for (i = 0; i < m; i++){
        printf("%d,", vetV[i]);
    }
    //exercício j
    int vetP[m];
    for (i = 0; i < m; i++){
        vetP[i] = jj(matriz,i,n);
        
    }
    printf("\nResposta letra j: ");
    for (i = 0; i < m; i++){
        printf("%d,", vetP[i]);
    }

}