#include <stdio.h>

int verificar(float, float, float, float, float, float, float, float);

int main(void){
    // declaração de variáveis.
    float ax1, ay1, ax2, ay2, bx1, by1, bx2, by2, contem;
    // leitura dos dados da tela.
    scanf("%f %f %f %f", &ax1, &ay1, &ax2, &ay2);
    // leitura dos demais retângulos.
    scanf("%f %f %f %f", &bx1, &by1, &bx2, &by2);
    while(!(bx1 == 0 && by1 == 0 && bx2 == 0 && by2 == 0)){
        // chamada de função para verificar se o primeiro contém o segundo       
        contem = verificar(ax1,ay1,ax2,ay2,bx1,by1,bx2,by2);
        if(contem){
            printf("(<%.2f,%.2f>,<%.2f,%.2f>) contem (<%.2f,%.2f>,<%.2f,%.2f>).\n", ax1, ay1, ax2, ay2, bx1, by1, bx2, by2);
        }
        // chamada de função para verificar se o segundo contém o primeiro
        else if(verificar(bx1,by1,bx2,by2,ax1,ay1,ax2,ay2)){
            printf("(<%.2f,%.2f>,<%.2f,%.2f>) contem (<%.2f,%.2f>,<%.2f,%.2f>).\n", bx1, by1, bx2, by2, ax1, ay1, ax2, ay2);
        }
        else{
            printf("Nao posso afirmar!\n");
        }
        scanf("%f %f %f %f", &bx1, &by1, &bx2, &by2);
    }    
    return 0;
}

int verificar(float ax1, float ay1, float ax2, float ay2, float bx1, float by1, float bx2, float by2){
    if(ax1 < bx1 && ay1 < by1 && ax2 > bx2 && ay2 > by2)
        return 1;
    else
        return 0;
}