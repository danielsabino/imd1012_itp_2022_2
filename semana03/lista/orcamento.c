#include <stdio.h>

int main(){
    // variáveis para armazenzar as quantidades
    int qtd, acc_qtd=0.0;
    // variáveis para armazenar os valores
    float valor, acc_total=0.0;

    // laço de repetição.
    do{
        // lê quantidade.
        scanf("%d", &qtd);
        // verifica se a quantidade é valida (critério de parada).
        if (qtd >= 0){
            // lê valor somente se quantidade for válida
            scanf("%f", &valor);
            // acumula valores
            acc_qtd = acc_qtd + qtd;
            acc_total = acc_total + (qtd * valor);
        }
    }while (qtd != -1);
    // imprime saída.
    printf("%d %.2f\n", acc_qtd, acc_total);
    return 0;
}