#include <stdio.h>

int main(){
    // declaração das variáveis.
    int i, num_equipes, corrida=0, salto=0, lancamento=0, total=0;
    char modalidade;
    // leitura do numero de equipes.
    scanf("%d", &num_equipes);
    // laço para coletar as equipes.
    for(i=0;i<num_equipes;i++){
        // laço para coletar os atletas de cada equipe.        
        do
        {            
            scanf("%c", &modalidade);            
            switch (modalidade)
            {
                case 'C': corrida++; break;
                case 'S': salto++; break;
                case 'L': lancamento++; break;                
            }
        } while (modalidade != 'F');
    }
    // impressão do resultado.
    printf("%d %d %d %d\n", corrida, salto, lancamento, corrida+salto+lancamento);
    return 0;
}
