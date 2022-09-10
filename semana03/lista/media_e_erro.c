#include <stdio.h>
#include <math.h>

int main(){
    // variaveis inteiras.
    int i;
    // variaveis double para armazenar as medias.
    float n,m_ari, m_geo, m_harm, qtd;
    // variaveis double para armazenar os erros
    float erro_harm, erro_geo, erro_medio;
    
    // variáveis acumuladoras para cálculo das médias
    m_ari = 0.0;
    m_geo = 1.0;
    m_harm = 0.0;
    // quantidade de número a serem lidos
    qtd = 10.0;

    for(i=0;i<qtd;i++){
        // leitura dos valores
        scanf("%f", &n);
        // acumular valores para calcular as médias
        m_ari = m_ari + n;
        m_geo = m_geo * n;
        m_harm = m_harm + 1/n;
    }
    // cálculo das médias
    m_ari /= qtd;
    m_geo = pow(m_geo,1/qtd);
    m_harm = qtd/m_harm;

    // cálculo dos erros
    erro_harm = (m_harm - m_ari)/m_ari;
    erro_geo = (m_geo - m_ari)/m_ari;
    erro_medio = (erro_harm + erro_geo)/2;

    // imprime saída
    printf("Média aritmética é %.2f\n", m_ari);
    printf("Média harmônica é %.2f\n", m_harm);
    printf("Média geométrica é %.2f\n", m_geo);
    printf("Erro médio é %.2f %%\n", (erro_medio)*100);
    return 0;
}