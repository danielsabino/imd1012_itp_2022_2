#include <stdio.h>

int presente(int n, int tam, int conjunto[]){    
    // Percorre o conjunto verificando se n está presente.
    for (int i = 0; i < tam; i++){
        if(n == conjunto[i])    
            // Se encontrou, retorna vetdadeiro.
            return 1;
    }
    // Se não encontrou, retorna falso.
    return 0;
}

int main(void){
    // Declaração de variáveis.
    int i, tam_a, tam_b;
    // Entrada do tamanho dos conjuntos.
    scanf("%d %d", &tam_a, &tam_b);
    // Declaração dos vetores que represetam os conjuntos.
    int conj_a[tam_a], conj_b[tam_b];
    // Leitura dos valores do primeiro conjunto.
    for(i=0;i<tam_a;i++)
        scanf("%d", &conj_a[i]);
    // Leitura dos valores do segundo conjunto.
    for(i=0;i<tam_b;i++)
        scanf("%d", &conj_b[i]);
    // Laço para verificar se os números do primeiro grupo estão no segundo grupo.
    for(i=0;i<tam_a;i++){
        if(presente(conj_a[i], tam_b, conj_b))
        // Impressão do número que está nos dois conjuntos.
            printf("%d ", conj_a[i]);
    }   
    printf("\n"); 
    return 0;
}