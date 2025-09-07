#include <stdio.h>

int main(){

    int torre = 0, bispo = 0, rainha = 0;

    for(torre; torre <= 5; torre++){
        printf("A Torre se moveu 1 casa para direita\n");
    }

    while(bispo <= 5){
        printf("O Bispo se moveu 1 casa para cima e para direita\n");
        bispo++;
    }

    do{
        printf("A Rainha se moveu 1 casa para esquerda\n");
        rainha++;
    }while(rainha <= 5);

    
    return 0;
}