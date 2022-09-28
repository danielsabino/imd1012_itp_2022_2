#include <stdio.h>

// Função para obter o valor absoluto de um número.
int absoluto(int x){
    int n = (x < 0) ? x * -1 : x;
    return n;    
}

int main(void){
    // Variáveis do tamanho da matriz.
    int n, m;
    // Variável para o índice de sobrevivência da planta.
    int s;
    // Variáveis para armazenar a soma do torreno, diferença, a menor diferença, linha e coluna do valor escolhido.
    int soma, diferenca, menor, lr, lc;
    // Leitura do tamanho da matriz;
    scanf("%d %d", &n, &m);
    // Leitura do valor do índice.
    scanf("%d", &s);
    // Variável matriz para representar o mapa do planeta. 
    int mapa[n][m];
    // Fazer leitura do mapa.
    for(int i=0;i<n; i++){
        for(int j=0;j<m;j++){           
            scanf("%d", &mapa[i][j]);            
        }        
    }
    // Percorrer a matriz para determinar os locais de bomba.
    for(int i=1;i<m-1;i++){
        for(int j=1;j<n-1;j++){
            // Soma os índices do subconjunto do terreno.
            soma = mapa[i-1][j-1] + mapa[i-1][j] + mapa[i-1][j+1] + mapa[i][j-1] + mapa[i][j] + mapa[i][j+1] + mapa[i+1][j-1] + mapa[i+1][j] + mapa[i+1][j+1];
            diferenca = absoluto(s - soma);
            // Aloca a primeira posição como o melhor valor inicialmente.
            if (i==1 && j==1){
                menor = diferenca;
                lr = i;
                lc = j;
            }
            // Teste se existe um valor melhor.
            else if(diferenca < menor){
                menor = diferenca;
                lr = i;
                lc = j;                
            }
        }
    }
    printf("A melhor area para exploracao eh %d %d com valor %d\n", lr, lc, menor);
    return 0;
}