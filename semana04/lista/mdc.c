#include <stdio.h>

// função para calcular o MDC
int calcular_mdc(int x, int y){
    // declaração das variáveis da função.
    int menor, mdc, z;
    // verifica se o primeiro valor igual a zero.
    if(y == 0){
        return x;
    }
    // caso contrário, calcula o MDC de y valor com x % y.
    else{
        // novo valor para cálculo do MDC.
        z = x % y;
        if(z == 0){
            return y;
        }
        // determina menor valor entre os dois números.
        menor = (z <= y) ? z : y;        
        // laço para encontrar o MDC: verificar qual o primeiro número a partir do menor valor é um dividendo dos dois números.
        mdc = menor;        
        while((z % mdc != 0) || (y % mdc != 0)){            
            mdc--;            
        }        
        return mdc;
    }

}

int main(){
    // declaração das variáveis.
    int x, y, mdc;
    // leitura dos dois valores de entrada.
    scanf("%d %d", &x, &y);
    // chamada da função para determinar o MDC.
    mdc = calcular_mdc(x,y);
    // impressão do resultado.
    printf("MDC(%d , %d) = %d\n", x, y, mdc);
    return 0;
}