#include <stdio.h>

int eh_perfeito(int);

int main(void){
    // Declaração das variáveis.
    int qtd, n, perfeito;
    // Leitura da quantidade de números.
    scanf("%d", &qtd);
    // Laço para fazer a leitura dos números.
    for (int i = 0; i < qtd; i++){
        scanf("%d", &n);
        // Chamada da função para verificar se é perfeito.
        perfeito = eh_perfeito(n);
        // Impressão da saída.
        if(perfeito){
            printf("%d eh perfeito\n", n);
        }
        else{
            printf("%d nao eh perfeito\n", n);
        }        
    }
    return 0;
}

int eh_perfeito(int n){
    // Declaração das variáveis da função.
    int soma = 0;
    // Laço para verificar se o número é perfeito.
    // Passar por todos os números inferiores ao número testado e adicionar à soma os divisores.    
    for (int i = 1; i < n; i++){
        // Testa se o número i é dividor de n.
        if (n % i == 0){
            // Se for divisor, adiciona a soma.
            soma = soma + i;
        }
    }
    // Verifica a condição de o número ser perfeito e retorna o resultado.
    if(soma == n){
        return 1;
    }
    else{
        return 0;
    }
}