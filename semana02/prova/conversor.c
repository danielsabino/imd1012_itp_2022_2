#include <stdio.h>

int main(){
    // Variável para armazenar a temperatura de entrada e as novas após conversão.
    float entrada, c, f, k;
    // Variável para armazenzar a escala.
    char escala;
    // Lê os valores
    scanf("%f %c", &entrada, &escala);
    // Faz a conversão a partir do tipo de escala de entrada.
    if(escala == 'C'){
        c = entrada;
        f = c * 1.8 + 32;
        k = c + 273.15;
    }
    else if(escala == 'F'){
        f = entrada;
        c = (f - 32)/1.8;
        k = c + 273.15;
    }
    else{
        k = entrada;
        c = k - 273.15;
        f = c * 1.8 + 32;
    }
    printf("Celsius: %.2f\n", c);
    printf("Farenheit: %.2f\n", f);
    printf("Kelvin: %.2f\n", k);

    return 0;
}