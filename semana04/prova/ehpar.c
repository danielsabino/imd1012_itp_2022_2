#include <stdio.h>

int ehPar(int);

int main(void){
    // Declaração das variáveis.
    int n;
    // Leitura do número de entrada.
    scanf("%d", &n);
    // Chamada da função quer verifica se o número é par e impressão da saída de acordo.
    if(ehPar(n)){
        printf("true\n");
    }
    else{
        printf("false\n");
    }
    return 0;
}

int ehPar(int n){
    if(n % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}