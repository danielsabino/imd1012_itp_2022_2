#include <stdio.h>

int calcular_tempo(int x, int v1, int v2){
    // declaração das variáveis com espoco da função.
    int d, t;
    // cálculo da diferença de velocidade.
    d = v1 - v2;
    // cálculo do tempo para alcançar o amigo, considerando valores inteiros como resultado.
    if(x % d == 0)
        t = x / d;
    else
        t = x / d + 1;
    // retorno do resultado.
    return t;
}

int main(){
    // declaração de variáveis.
    int x, v1, v2, tempo;
    // leitura da entrada.
    scanf("%d %d %d", &x, &v1, &v2);
    // verificação da possibilidade de alcançar o amigo.
    if(v2 >= v1)
        printf("impossivel\n");
    else{
        // chamada da função para determinar o tempo.
        tempo = calcular_tempo(x,v1,v2);
        // impressão do resultado.
        printf("%ds\n", tempo);
    }    
    return 0;
}

