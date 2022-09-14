#include <stdio.h>

int main(){
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    
    if(n1 % 2 == 0 && n2 % 2 == 0){
        printf("%d\n", n1+n2);
    }
    if(n1 % 2 != 0){
        printf("Não posso somar, pois %d não é par\n", n1);
    }
    if(n2 % 2 != 0){
        printf("Não posso somar, pois %d não é par\n", n2);
    }
    return 0;
}