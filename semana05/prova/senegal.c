#include <stdio.h>

int calcular_aposta(int largura, int altura, int bandeira[altura][largura], char cor){
    int col_inicial, col_final, aposta = 0, faixa;
    
    faixa = largura / 3;

    switch(cor){
        case 'G': col_inicial = faixa * 0; break;
        case 'Y': col_inicial = faixa * 1; break;
        case 'R': col_inicial = faixa * 2; break;
    }
    for(int j=col_inicial;j<col_inicial+faixa;j++){
        for(int i=0;i<altura;i++){
            aposta = aposta + bandeira[i][j];
        }
    }
    return aposta;
}

int main(void){

    int largura, altura, inicial, aposta;
    char cor;

    scanf("%d %d %c", &largura, &inicial, &cor);

    altura = largura * 2/3;
    int bandeira[altura][largura];

    inicial++;
    for(int j=0; j<largura; j++){        
        for(int i=0; i<altura; i++){
            bandeira[i][j] = inicial;
        }
        if((j+1) % (largura/3) == 0){
            inicial++;
        }
    }

    aposta = calcular_aposta(largura, altura, bandeira, cor);
    printf("%d\n", aposta);
    
    return 0;
}