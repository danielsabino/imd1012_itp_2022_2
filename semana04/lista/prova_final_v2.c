#include <stdio.h>

float calcNota(float n1, float n2, float n3){
    // declaração das variáveis da função.
    float media, menor, n4;
    // cálculo da média.
    media = (n1 + n2 + n3)/3.0;
    // verificação da necessidade ou não de fazer a prova de reposição.
    // se o aluno precisa.
    if(n1 >= 3 && n2 >= 3 && n3 >= 3 && media < 5){
        // cálculo da nota necessária para passar.        
        if(n1 <= n2 && n1 <= n3){
            n4 = 15 - (n2 + n3);
        }
        else if(n2 <= n1 && n2 <= n3){
            n4 = 15 - (n1 + n3);
        }
        else{
            n4 = 15 - (n1 + n2);
        }
        return n4;        
    }
    // se o aluno não precisa.
    else {
        return -1;
    }
}

int main(){
    // declaração de variáveis.
    float n1, n2, n3, n4;
    // leitura das notas.
    scanf("%f %f %f", &n1, &n2, &n3);
    // chamada da função de calcular a nota do aluno.
    n4 = calcNota(n1,n2,n3);
    // em caso de não precisar fazer prova final.
    if(n4 < 0){
        printf("Nao faz prova final\n");
    }
    else {
        printf("Final\n%.1f\n", n4);
    }
    // em caso de precisar fazer prova final
    return 0;
}