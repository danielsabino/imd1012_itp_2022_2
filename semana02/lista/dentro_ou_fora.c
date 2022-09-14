#include <stdio.h>

int main(){
    // Declara quatro variáveis inteiras para armazenar as coordenadas do retângulo.
    int rx1,ry1,rx2,ry2;
    // Declara as variáveis para armazenar os dados do ponto.
    int px,py;
    // Lê os valores de entrada.
    scanf("%d %d %d %d %d %d", &rx1, &ry1, &rx2, &ry2, &px, &py);
    // Faz a verificação se o ponto está dentro ou não do retângulo.
    // Se as coordenadas do ponto estiverem entre as coordenadas do retângulo, o ponto está dentro.
    // Ou seja, se a coordenada x do ponto for maior ou igual a rx1 e menor ou igual a rx2 e se a 
    // coordenada y do ponto for maior ou igual a ry1 e menor ou igual a ry2, o ponto está dentro.
    if(px >= rx1 && px <= rx2 && py >= ry1 && py <= ry2){
        printf("Dentro!\n");
    }
    else{
        printf("Fora!\n");
    }
    
    return 0;
}