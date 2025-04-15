#include <stdio.h>

int main(){
    char estado_1, estado_2;
    char codigo_1[50], codigo_2[50];
    char nome_1[50], nome_2[50];
    int populacao_1, populacao_2;
    float area_1, area_2;
    float pib_1, pib_2;
    int numero_pontos_turisticos_1, numero_pontos_turisticos_2;


    printf("DIGITE ABAIXO AS INFORMAÇÕES DA CARTA 01 \n");

    //ENTRADA DE DADOS CARTA 01
    printf("Digite o estado: \n");
    scanf("%c", &estado_1);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo_1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_1);

    printf("Digite a População: \n");
    scanf("%d", &populacao_1);

    printf("Digite a Area: \n");
    scanf("%f", &area_1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &numero_pontos_turisticos_1);


    //ENTRADA DE DADOS CARTA 02
    printf("DIGITE AGORA AS INFORMAÇÕES DA CARTA 02 \n");

    getchar(); //limpeza de buffer para apresentar a proxima informação sem erro
    printf("Digite o estado: \n");
    scanf("%c", estado_2);

    getchar();
    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo_2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_2);

    printf("Digite a População: \n");
    scanf("%d", &populacao_2);

    printf("Digite a Area: \n");
    scanf("%f", &area_2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &numero_pontos_turisticos_2);


    //SAIDA DE DADOS DA CARTA 01
    printf("VEJA ABAIXO AS INFORMAÇÕES DA CARTA 01 \n");

    printf("ESTADO: %c \n", estado_1);

    printf("CODIGO: %s \n", codigo_1);

    printf("CIDADE: %s \n", nome_1);

    printf("POPULAÇÃO: %d \n", populacao_1);

    printf("AREA: %f \n", area_1);

    printf("PIB: %f \n", pib_1);

    printf("PONTOS TURISTICOS: %d \n", numero_pontos_turisticos_1);


    //SAIDA DE DADOS DA CARTA 02
    printf("VEJA ABAIXO AS INFORMAÇÕES DA CARTA 02 \n");

    printf("ESTADO: %c \n", estado_2);

    printf("CODIGO: %s \n", codigo_2);

    printf("CIDADE: %s \n", nome_2);

    printf("POPULAÇÃO: %d \n", populacao_2);

    printf("AREA: %f \n", area_2);

    printf("PIB: %f \n", pib_2);

    printf("PONTOS TURISTICOS: %d \n", numero_pontos_turisticos_2);


    if(populacao_1 > populacao_2){
        printf("CARTA 1 VENCEU!. \n");
    }else{
        printf("CARTA 2 VENCEU!. \n");
    }

    return 0;
   
}