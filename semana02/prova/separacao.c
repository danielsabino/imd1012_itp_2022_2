#include <stdio.h>

int main(){
    int numero, divisao, resto;
    scanf("%d", &numero);
    
    // Existe sexto dígito? Qual é?
    // Quantos 100.000 cabem no número?
    if(numero/100000 > 0) printf("%d\n",numero/100000);
    // Existe quinto dígito? Qual é?
    // Se existe, pega o primeiro dígito dele (mod 10)?
    if(numero/10000 > 0) printf("%d\n",numero/10000%10);
    // Existe quarto dígito? Qual é?
    // Se existe, pega o primeiro dígito dele (mod 10)?
    if(numero/1000 > 0) printf("%d\n",numero/1000%10);
    if(numero/100 > 0) printf("%d\n",numero/100%10);
    if(numero/10 > 0) printf("%d\n",numero/10%10);
    if(numero > 0) printf("%d\n",numero%10);

    return 0;
}