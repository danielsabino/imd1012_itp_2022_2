#include <stdio.h>

int eh_primo(int n){
    // declaração de variáveis da função.
    int i, count = 0;
    // verificação se é primo.
    for(i=1;i<=n;i++){
        // se a divisão do número pelo dividendo i é igual a zero.
        // lembre: 0 = falso e qualquer outro valor igual a verdadeiro.
        if(!(n % i)){
            count++;
        }        
    }
    // retorno da função.
    if(count > 2 || n < 2){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    // declaração de variáveis.
    int n;
    // leitura do número.
    scanf("%d", &n);
    // verificação se é primo.
    if(eh_primo(n)){
        // verificação se o número posterior é primo e impressão da saída.
        if (eh_primo(n + 2)){
            printf("Numero forma par de gemeos\n");
        }
        else{
            printf("Numero nao forma par de gemeos\n");
        }
    }
    else{
        printf("Numero nao forma par de gemeos\n");
    }
    return 0;
}