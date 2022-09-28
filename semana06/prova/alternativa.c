#include <stdio.h>

int menor(int x, int y){
    return (x < y) ? x : y;
}

void imprimir(int dim, int piramide[dim][dim]){
    for (int i = 0; i < dim; i++){
        for (int j = 0; j < dim; j++){
            printf("%d ", piramide[i][j] + 1);
        }
        printf("\n");
    }
}

int main(void){
    // Declaração de variáveis.
    int dim;
    // Leitura do tamanho da matriz.
    scanf("%d", &dim);
    // Declaração da matriz.
    int piramide[dim][dim];
    // Impressão da pirâmide.
    for (int i = 0; i < dim; i++){
        for (int j = 0; j < dim; j++){
            piramide[i][j] = menor(dim-1-i, i) + menor(dim-1-j, j);            
        }        
    }
    imprimir(dim, piramide);
    return 0;
}