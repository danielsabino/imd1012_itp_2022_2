#include <stdio.h>

int testa_divisor(int numero, int divisor){
    // Dá para fazer bem direta essa função. 
    return (numero % divisor == 0) ? 1 : 0;
}

int soma_divisores(int value){
    // Declaração de variáveis.
    int soma = 0;
    // Laço para somar os divisores de um número.
    for (int i = 1; i < value; i++){
        if (testa_divisor(value, i)){
            soma = soma + i;
        }
    }    
    // Retorna resultado.
    return soma;
}

int testa_amigos(int a, int b){
    // Declaração de variáveis.
    int soma_a = 0, soma_b = 0;
    // Calcula a soma dos divisores de cada número.
    soma_a = soma_divisores(a);
    soma_b = soma_divisores(b);
    // Verifica se os dois números são amigos.
    if(a == soma_b && b == soma_a){
        return 1;
    }
    else{
        return 0;
    }
}

int main(void){
    // Declaração de variáveis.
    int a, b, c, d, possui=0;
    // Leitura dos inveralos L1 e L2.
    scanf("%d %d %d %d", &a, &b, &c, &d);
    // Loop para percorrer todos os números de L1.
    for (int i = a; i <= b; i++){
        // Loop para percorrer todos os números de L2.
        for (int j = c; j <= d; j++){
            if (i != j){
                if(testa_amigos(i,j)){
                    printf("O %d possui um amigo!\n", i);
                    possui = 1;
                    break;
                }
            }
        }
    }
    if(!possui){
        printf("Os intervalos nao apresentam amigos!\n");
    }
}