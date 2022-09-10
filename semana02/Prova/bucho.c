#include <stdio.h>

int main(){
    // Variáveis para receber o número do combo, o pagamento e o troco.
    int combo, dinheiro, troco;;    
    // Lê os valores de entrada.
    scanf("%d %d", &combo, &dinheiro);
    // Verifica qual o combo e calculo o troco/falta de acordo.
    switch(combo){
        case 1: troco = dinheiro - 12; break;
        case 2: troco = dinheiro - 23; break;
        case 3: troco = dinheiro - 31; break;
        case 4: troco = dinheiro - 28; break;
        case 5: troco = dinheiro - 15; break;
    }
    // Imprime a mensagem de acordo com o valor do troco.
    // Se não tem troco.
    if(troco == 0){
        printf("Deu certim!\n");
    }
    // Se tem troco:
    else if(troco > 0){
        printf("Troco = %d reais\n", troco);
    }
    else{
        printf("Saldo insuficiente! Falta %d reais\n", -troco);
    }

    return 0;
}