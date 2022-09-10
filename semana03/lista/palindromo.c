#include <stdio.h>

int main(){
    int i, n, aux, ultimo, rev = 0, par;
    // leitura do número.
    scanf("%d", &n);

    // usar outra variável para preservar o valor original.
    aux = n;
    // laco para construcao do número reverso.
    while(aux > 0){
        // obtenção do último dígito do número corrente.
        ultimo = aux % 10;
        // construção do número reverso a partir do último dígito corrente do número original.
        // a cada iteração o número inverso cresce uma ordem de grandeza.
        rev = rev * 10 + ultimo;
        // a cada iteração o número original desce uma ordem de grandeza.        
        aux = aux / 10;
    }
    // impressão da saída em partes.
    // o número primeiro
    printf("%d ", n);
    // se é palíndromo ou não
    if(n == rev)
        printf("é Palíndromo ");
    else
        printf("não é Palíndromo ");
    // definição ser é par ou ímpar.
    (n % 2 == 0) ? printf("e par.\n") : printf("e impar.\n");
    return 0;
}