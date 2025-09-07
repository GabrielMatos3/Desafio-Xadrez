#include <stdio.h>

int main(){

    int torre = 0, bispo = 0, rainha = 0, cavalo = 0;
    int movimento = 0;

    for(torre; torre <= 5; torre++){
        printf("A Torre se moveu 1 casa para direita\n");
    }

    printf("\n");

    while(bispo <= 5){
        printf("O Bispo se moveu 1 casa para cima e para direita\n");
        bispo++;
    }

    printf("\n");

    do{
        printf("A Rainha se moveu 1 casa para esquerda\n");
        rainha++;
    }while(rainha <= 5);

    printf("\n");

    while(movimento == 0){
        for (cavalo; cavalo <=1 ; cavalo++)
        {
            printf("cavalo se moveu 1 casa para cima\n");
        }

        printf("cavalo se moveu 1 casa para direita");
        movimento++;
        printf("\n");
        
    }
    
    return 0;
}