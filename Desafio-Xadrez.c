#include <stdio.h>

void recursivoTorre(int casas){
    if(casas > 0){
        recursivoTorre(casas - 1);
        printf("se moveu 1 casa para direita\n");
    }
}

void recursivoBispo(int casas){
    if(casas > 0){
        recursivoBispo(casas - 1);
        printf("se moveu 1 casa para cima e para direita\n");
    }
}

void recursivoRainha(int casas){
    if(casas > 0){
        recursivoRainha(casas - 1);
        printf("se moveu 1 casa para esquerda\n");
    }
}

int main(){
    //declaração de variaveis
    int cavalo = 0, movimento = 0;

    int torre = 5;
    printf("Torre \n");
    recursivoTorre(torre);

    printf("\n");

    int bispo = 5;
    printf("Bispo \n");
    recursivoBispo(bispo);
      

    printf("\n");

    int rainha = 5;
    printf("Rainha \n");
    recursivoRainha(rainha);
    

    printf("\n");
    //movimentação do cavalo
    printf("Cavalo\n");
    while(movimento == 0){
        for (cavalo; cavalo <=1 ; cavalo++)
        {
            printf("se moveu 1 casa para cima\n");
            
        }

        printf("se moveu 1 casa para direita");
        movimento++;
        printf("\n");
        
    }
    
    return 0;
}