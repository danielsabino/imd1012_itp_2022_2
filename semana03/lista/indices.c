#include <stdio.h>

int main(){

    // varíavel para armazenar o número de registros para ler.
    int i, qtd_registros;
    // variáveis para índice e acumuladores.
    float indice, acc_indices = 0.0, acc_qtd = 0.0;
    
    // leitura da quantidade índices.
    scanf("%d", &qtd_registros);
    // teste para verificar se existem registros.
    if (qtd_registros <= 0){
        printf("A competicao nao possui dados historicos!\n");
    }
    // se existem registros
    else{
        // laço para fazer a leitura dos índices individuais de cada ano.
        for(i=0;i<qtd_registros;i++){
            // leitura dos registros.
            scanf("%f", &indice);
            // teste para verificar se o índice é válido (houve competição naquele ano).
            if (indice >= 0){
                // acumular tempos.
                acc_indices += indice;
                // acumular quantidades válidas.
                acc_qtd++;
            }
        }
        // mostrar saída se houver alguma competição com índices.
        if(acc_qtd > 0)
            printf("%.2f\n", acc_indices/acc_qtd);
        else
            printf("A competicao nao possui dados historicos!\n");
    }
    return 0;    
}