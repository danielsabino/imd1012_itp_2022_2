#include <stdio.h>

int main(){

    float minimo, tempo;
    int aptos=0, series=0;

    // leitura do tempo mínimo.
    scanf("%f", &minimo);
    // leitura dos tempos individuais
    do
    {   
        scanf("%f", &tempo);
        // verificação se o tempo torna o atleta apto a correr.
        if(tempo <= minimo && tempo > 0){
            // contabiliza o atleta.
            aptos++;
        }
        
    } while (tempo != -1);    
    
    // define número de séries.
    if(aptos > 0){
        if(aptos % 8 == 0){
            series = aptos/8;
        }
        else{
            series = aptos/8 + 1;
        }
        
    }    

    // imprime saída.
    printf("%d %d\n", aptos, series);

    return 0;
}