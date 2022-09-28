#include <stdio.h>

int main(){
    // declaracao de variaveis.
    int linhas, i, j, numero = 1, maior, max_digitos=0;
    // leitura do numero de linhas.
    scanf("%d", &linhas);
    // teste para saber se numero de linhas e valido.
    if(linhas > 0){
    // determina o maior número dá pirâmide
        maior = (linhas * linhas)/2 + linhas/2;
        // determina número de digitos do maior número para fazer o alinhamento correto
        while(maior > 0){
            max_digitos++;
            maior = maior / 10;
        }
    // laco para o numero de linhas.
        for(i=0;i<linhas;i++){
            
            // laco para imprimir os numeros de cada linha.
            for(j=0;j<=i;j++){
                printf("%*d", max_digitos, numero);
                numero++;
                if(j < i)
                    printf(" ");
                else
                    printf("\n");
            }
            
        }
    }
    else
        printf("Você entrou com %d, tente de novo na próxima\n", linhas);
    return 0;
}