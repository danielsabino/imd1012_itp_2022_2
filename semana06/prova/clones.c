#include <stdio.h>

int main(void){
    // Variáveis do tamanho da matriz.
    int m, n;
    // Variáveis da última localização do Jedi.
    int jr, jc;
    // Variável para indicar a situação do Jedi, se existe bomba em um local e a quantidade de bombas.
    int morreu = 0, bomba, n_bombas = 0;
    // Leitura do tamanho da matriz;
    scanf("%d %d", &m, &n);
    // Leitura da última localização.
    scanf("%d %d", &jr, &jc);
    // Variável matriz para representar o mapa. Matriz de tamanho maior para tratar a verificação dos cantos.
    int mapa[m+2][n+2];
    // Fazer leitura do mapa.
    for(int i=0;i<m+2; i++){
        for(int j=0;j<n+2;j++){
            if ((i == 0) || (j == 0) || (i == m+1) || (j == n+1)) mapa[i][j] = 0;
            else scanf("%d", &mapa[i][j]);            
        }        
    }
    // Percorrer a matriz para determinar os locais de bomba.    
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            // Percorre todas as posições ao redor de cada célula.
            bomba = 1;
            for(int k=i-1;k<=i+1;k++){
                for(int l=j-1;l<=j+1;l++){
                    // Se pelo menos um ponto ao redor da célula for maior ou igual a ela, não tem bomba.
                    //printf("Comparando índice [%d,%d](%d) com [%d,%d](%d)\n", i,j,mapa[i][j],k,l,mapa[k][l]);
                    if ((k != i || l != j) && (mapa[i][j] <= mapa[k][l])){
                        bomba = 0;                        
                    }
                }                
            }
            // Se existe bomba no local, imprime a mensagem.
            if (bomba){
                printf("Local %d: %d %d\n", n_bombas+1, i, j);
                n_bombas++;
                // Verifica se o Jedi estava no local atingido da bomba.
                if (jr == i && jc == j) 
                    morreu = 1;
            }            
        }        
    }
    if (morreu) printf("Descanse na Força...\n");
    else printf("Ao resgate!\n");
    return 0;
}