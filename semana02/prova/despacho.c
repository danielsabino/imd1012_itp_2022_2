#include <stdio.h>

int main(){
    int qtd, heroi, monstro;
    scanf("%d %d %d", &qtd, &heroi, &monstro);

    // Determina se os herois são suficientes a partir do nível do monstro.
    switch(monstro){
        // Lobo
        case 1:
            // 03 herois C ou qualquer quantidade de herois maior que zero de outra classe.
            if((heroi == 1 && qtd >= 3) || (heroi >= 2 && qtd > 0)){
                printf("Heróis vencerão!\n");
            }
            else printf("Melhor chamar Saitama!\n");
            break;
        // Tigre
        case 2:
            // 03 herois B ou qualquer quantidade de herois maior que zero de outra classe acima. 
            if((heroi == 2 && qtd >= 3) || (heroi >= 3 && qtd > 0)) printf("Heróis vencerão!\n");
            else printf("Melhor chamar Saitama!\n");
            break;
        // Demônio
        case 3:
            // 03 herois B ou qualquer quantidade de herois maior que zero de outra classe acima. 
            if((heroi == 3 && qtd >= 3) || (heroi >= 4 && qtd > 0)) printf("Heróis vencerão!\n");
            else printf("Melhor chamar Saitama!\n");
            break;
        // Dragão
        case 4:
            // 03 herois A ou qualquer quantidade de herois maior que zero de outra classe acima. 
            if((heroi == 4 && qtd >= 3) || (heroi >= 5 && qtd > 0)) printf("Heróis vencerão!\n");
            else printf("Melhor chamar Saitama!\n");
            break;
        // Divindade
        case 5:
            // 03 herois S ou qualquer Saitama.
            if(heroi >= 5 && qtd > 0) printf("Heróis vencerão!\n");
            else printf("Melhor chamar Saitama!\n");
            break;

    }
    return 0;
}