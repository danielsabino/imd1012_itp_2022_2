#include <stdio.h>

int main(void){
    // Variável para representar o mapa marítimo com as embarcações;
    char mapa[10][10];
    // Variável para entradas;
    int linha, coluna;
    // Matriz para armazenar as posições das embarcações. 
    int posicoes[4][2];
    // Preenche o mapa com água.
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            mapa[i][j] = '~';
        }        
    }
    
    // Loop para fazer a leitura e preencher o mapa com as posições das quatro embarcações.
    for (int i=0; i < 4;i++){
        // Leitura das coordenadas de cada ponto.
        for (int j = 0; j <= i; j++){
            scanf("%d %d", &posicoes[j][0], &posicoes[j][1]);
        }
        // Canoa
        if(i == 0){
            mapa[posicoes[0][0]][posicoes[0][1]] = '*';
            // Implementação alternativa
            //int linha = posicoes[0][0];
            //int coluna = posicoes[0][1];
            //mapa[linha][coluna] = '*';            
        }
        // Barco
        else if(i == 1){
            // Vertical ou horizontal? Poderia fazer uma função para isso...
            // Horizontal.
            if (posicoes[0][0] == posicoes[1][0]){
                mapa[posicoes[0][0]][posicoes[0][1]] = '<';
                mapa[posicoes[1][0]][posicoes[1][1]] = '>';
            }
            else{
                mapa[posicoes[0][0]][posicoes[0][1]] = '^';
                mapa[posicoes[1][0]][posicoes[1][1]] = 'v';
                
            }
        }
        // Fragata
        else if(i == 2){
            // Vertical ou horizontal? Poderia fazer uma função para isso...
            // Horizontal.
            if (posicoes[0][0] == posicoes[1][0]){
                mapa[posicoes[0][0]][posicoes[0][1]] = '<';
                mapa[posicoes[1][0]][posicoes[1][1]] = '=';
                mapa[posicoes[2][0]][posicoes[2][1]] = '>';
            }
            else{
                mapa[posicoes[0][0]][posicoes[0][1]] = '^';
                mapa[posicoes[1][0]][posicoes[1][1]] = '|';
                mapa[posicoes[2][0]][posicoes[2][1]] = 'v';
            }
        }
        // Destroier
        else{
            if (posicoes[0][0] == posicoes[1][0]){
                mapa[posicoes[0][0]][posicoes[0][1]] = '<';
                mapa[posicoes[1][0]][posicoes[1][1]] = '=';
                mapa[posicoes[2][0]][posicoes[2][1]] = '=';
                mapa[posicoes[3][0]][posicoes[3][1]] = '>';                
            }
            else{                
                mapa[posicoes[0][0]][posicoes[0][1]] = '^';
                mapa[posicoes[1][0]][posicoes[1][1]] = '|';
                mapa[posicoes[2][0]][posicoes[2][1]] = '|';
                mapa[posicoes[3][0]][posicoes[3][1]] = 'v';
            }
        }
        // Tem muita repetição, né? Advinha o que pode ser utilizado para reduzir o tamanho do código?
    }
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf("%c", mapa[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}