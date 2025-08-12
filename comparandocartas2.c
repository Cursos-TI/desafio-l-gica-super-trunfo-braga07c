#include <stdio.h>
#include <string.h>


typedef struct {
    char estado;
    char codigo_da_carta;
    char nome_da_cidade[50];
    int populacao;
    float área;
    float PIB;

} Carta;


Carta criarCarta(char estado, char codigo_da_carta, char nome_da_cidade, int populacao, float área,float PIB ) {
    Carta carta;
    strcpy(carta.populacao, populacao);
    carta.populacao = populacao;
    return carta;
}


void compararCartas(Carta carta1, Carta carta2) {
    printf("Comparando %s e %s\n", carta1.populacao, carta2.populacao);

    if (carta1.populacao > carta2.populacao) {
        printf("%s tem mais população (%d) do que %s (%d)\n", carta1.populacao, carta1.populacao, carta2.populacao, carta2.populacao);
    } else if (carta2.populacao > carta1.populacao) {
        printf("%s tem mais população (%d) do que %s (%d)\n", carta2.populacao, carta2.populacao, carta1.populacao, carta1.populacao);
    } else {
        printf("%s e %s têm a mesma população (%d)\n", carta1.populacao, carta2.populacao, carta1.populacao);
    }
}

int main() {
    
     printf("carta1 populacao = 212000000 \n");

     printf("carta2 populacao = 45000000" );


    


    return 0;
}

