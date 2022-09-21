#include <stdio.h>

int conta_multiplos_2_e_3(int vetor[15], int multiplo){
    int cont = 0;
    for (int i=0; i<15;i++){
        if (vetor[i] % multiplo == 0)
            cont++;
    }
    return cont;
}

int conta_multiplos_outros(int vetor[15]){
    int cont = 0;
    for (int i=0; i<15;i++){
        if (vetor[i] % 2 != 0 && vetor[i] % 3 != 0)
            cont++;
    }
    return cont;
}

void imprime_vetor(int vetor[], int tam, char letra){
    printf("%c = [", letra);
    for (int i=0; i<tam; i++){
        printf("%d", vetor[i]);
        if (i < tam-1)
            printf(", ");
    }
    printf("]\n");
}

int main(void){
    // Declaração do vetor A.
    int a[15];
    int aux;
    // Leitura dos valores de entrada.
    for(int i=0; i<15; i++){
        scanf("%d", &a[i]);
    }
    // Conta a quantidade dos múltiplos para inicializar vetores.
    int tam_b = conta_multiplos_2_e_3(a, 2);
    int tam_c = conta_multiplos_2_e_3(a, 3);
    int tam_d = conta_multiplos_outros(a);

    // Inicializa os vetores B, C e D.
    int b[tam_b];
    int c[tam_c];
    int d[tam_d];
    
    // Preenche e imprime do vetor B com múltiplos de 2.
    aux = 0;
    for(int i=0; i<15; i++){
        if(a[i] % 2 == 0){
            b[aux] = a[i];
            aux++;
        }
    }
    imprime_vetor(b, tam_b, 'B');
    // Preenche e imprime do vetor C com múltiplos de 3.
    aux = 0;
    for(int i=0; i<15; i++){
        if(a[i] % 3 == 0){
            c[aux] = a[i];
            aux++;
        }
    }
    imprime_vetor(c, tam_c, 'C');
    // Preenche e imprime do vetor D com outros números.
    aux = 0;
    for(int i=0; i<15; i++){
        if(a[i] % 2 != 0 && a[i] % 3 != 0){
            d[aux] = a[i];
            aux++;
        }
    }
    imprime_vetor(d, tam_d, 'D');
    return 0;
}