#include <stdio.h>

int main(){
    float carta_1, carta_2;

    char estado; 
    char codigo_da_carta;
    char nome_da_cidade;
    int populacao;
    float area;
    float PIB; 
    int número_de_pontos_turisticos; 

    printf("Digite o nome do estado: \n");
    scanf("%f",estado);

    printf("Digite o código da carta: \n");
    scanf("%f",codigo_da_carta );

    printf("Digite o nome da cidade: \n");
    scanf("%f",nome_da_cidade);

    printf("Digite a população: \n");
    scanf("%f",populacao);

    printf("Digite a area: \n");
    scanf("%s",area);

    printf("Digite o PIB \n");
    scanf("%s",PIB);
        

    if (carta_1 > carta_2){
        printf("Carta_1 tem maior população.\n");
    } else{
        printf("Carta_2 tem maior população.\n");
    }

    printf("A carta vencedora é: %s\n");

    return 0;
}
