#include <stdio.h>

int main(){
    // declaração de variáveis
    int n;
    char l;
    // leitura da entrada
    scanf("%d %c", &n, &l);
    // laço para escrever as linhas
    for (int i=1;i<=n-1;i++) {
        // laço para escrever as colunas (elementos da linha)
         for (int j=1;j<=n ;j++) {
            // se diagonal principal ou diagonal secundária, imprime a letra
            if (i == j | j == n - i){
                printf("%c",l);   
            }
            // qualquer outra posição, imprime espaço 
            else{
                printf(" "); 
            }
        }
        printf("\n");
    }
}