#include <stdio.h>

int main(void){
    // Declaração de variáveis.
    int n, i, j, k, aux;
    // Entrada do tamanho do vetor.
    scanf("%d", &n);
    // Alocação do vetor com tamanho de entrada.
    int vetor[n];
    // Leitura dos valores do vetor.
    for(i=0;i<n;i++){
        scanf("%d", &vetor[i]);
    }
    // Impressão do vetor inicial
    for(k=0;k<n;k++){
        printf("%d ", vetor[k]);
    }
    printf("\n");
    // Laço externo do loop para percorrer todos os elementos do vetor.
    for(i=0;i<=n-2;i++){        
        // Laço interno para comparação dos valores.
        for(j=i+1;j<=n-1;j++){
            if (vetor[i] > vetor[j]){
                // Troca de valores
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
        // Impressão do vetor atual
        for(k=0;k<n;k++){
            printf("%d ", vetor[k]);
        }
        printf("\n");
    }    
    return 0;
}