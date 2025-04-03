#include <stdio.h>
 
 int main(){
 
 //estou apresentando as variaves do codego
     char estado1[20], estado2[20];
     char code1[20], code2[20];
     char cidade1[20], cidade2[20];
     int populacao1, populacao2;
     float kilometros1, kilometros2;
     float PIB1, PIB2;
     int pontosTuristicos1, pontosTuristicos2;
     float DensidadePopulacional1, DensidadePopulacional2;
     float PIBperCapita1, PIBperCapita2;

 // introdução,e como o usuario deve digita as infomarçoes pra nao da errdo
     printf("===cadastramentos das cartas do Super Trunfo===\n");
     printf(" (carta 1) e (carta 2)\n");
     printf("As informações deve ser escrita tudo junto,sem spaço e sem acentuação pra nao erros.\n");
     printf("\n");
 
     //codego pra receber as informações da primeira carta do jogo do Super Trunfo
     printf("(carta 1)\n");
     printf("\n");
 
     printf("Nome do Estado: ");//printf e scanf,para receber as informação do nome do Estado (card 1)
     scanf("%s", estado1);
 
     printf("Codego da Carta(letra que reprensenta o estado com o numero de 01 a 04): ");//printf e scanf, para  receber informação do Code da Carta (card 1)
     scanf("%s", code1);
 
     printf("Nome da Cidade: ");//printf e scanf,para receber informação do nome da cidade (card 1)
     scanf("%s", cidade1);
 
     printf("Numero da População da cidade: ");//printf e scanf,para receber as informação da População (card 1)
     scanf("%d", &populacao1);
 
     printf("Area da Cidade em km²: ");//printf e scanf,para receber as informação da Area em km² (card 1)
     scanf("%f", &kilometros1);
 
     printf("O PIB da cidade: ");//printf e scanf,para receber as informação do PIB (card 1)
     scanf("%f", &PIB1);
 
     printf("Quantidades de pontos turisticos da cidade: ");//printf e scanf,para receber as informação quantidades de Pontos Turisticos (card 1)
     scanf("%d", &pontosTuristicos1);
     printf("\n");
 
     //codego pra receber as informações segunda carta  do jogo do Super Trunfo
     printf("(carta 2)\n");
     printf("\n");
 
     printf("Nome do Estado: ");//printf e scanf,para receber as informação do nome do Estado (card 2)
     scanf("%s", estado2);
 
     printf("Codego da Carta(letra que reprensenta o estado com o numero de 01 a 04): ");//printf e scanf, para  receber informação do Code da Carta (card 2)
     scanf("%s", code2);
 
     printf("Nome da Cidade: ");//printf e scanf,para receber informação do nome da cidade (card 2)
     scanf("%s", cidade2);
 
     printf("Numero da População da cidade: ");//printf e scanf,para receber as informação da População (card 2)
     scanf("%d", &populacao2);
 
     printf("Area da Cidade em km²: ");//printf e scanf,para receber as informação da Area em km² (card 2)
     scanf("%f", &kilometros2);
 
     printf("O PIB da cidade: ");//printf e scanf,para receber as informação do PIB (card 2)
     scanf("%f", &PIB2);
 
     printf("Quantidades de pontos turisticos da cidade: ");//printf e scanf,para receber as informação quantidades de Pontos Turisticos (card 2)
     scanf("%d", &pontosTuristicos2);
     printf("\n");

//calculo das 2 variaves densidade populacional e PIB per capita

    DensidadePopulacional1 = ((float)populacao1 / kilometros1);// calcolando da densidade transformando o valor de inteiro da população em ponto flutuante (card 1)
    PIBperCapita1 = ((float)PIB1 / populacao1);//calco da PIB per capita o valor de inteiro da população em ponto flutuante (card 1)

    DensidadePopulacional2 = ((float)populacao2 / kilometros2);//calcolando da densidade transformando o valor de inteiro da população em ponto flutuante (card 2)
    PIBperCapita2 = ((float)PIB2 / populacao2);//calcolando da PIB per capita o valor de inteiro da população em ponto flutuante (card 2)




 //imprimindo as informações recebida do usuario durante a execução do codegos
 //imprimindo as informações da carta 1 
     printf("----carta 1----\n");
     printf("\n");
 
     printf("Nome do Estado: %s\n", estado1);//nome do Estado(card 1)
 
     printf("Numero do codego: %s\n", code1);//numero do code da carta (card 1)
 
     printf("Nome da Cidade: %s\n", cidade1);//nome da cidade (card 1)
 
     printf("Numero da população: %d\n", populacao1);//numero da população (card 1)
 
     printf("Area da cidade: %.3f\n", kilometros1);//medimento da Area  (card 1)
 
     printf("O numero do PIB: %.3f\n", PIB1);//numero do PIB  (card 1)
 
     printf("Quantidade de pontos turisticos: %d\n", pontosTuristicos1);//numero de pontos turisticos (card 1)

     printf("O valor da Densidade Populacional(população dividido por area) é: %.3f\n", DensidadePopulacional1);

     printf("O valor do PIB per Capita(PIB dividido por população) é: %.3f\n", PIBperCapita1);
     printf("\n");

  //imprimindo as informações da carta 2
     printf("----carta 2----\n");
     printf("\n");
 
     printf("Nome do Estado: %s\n", estado2);//nome do Estado (card 2)
 
     printf("Numero do codego: %s\n", code2);//numero do code  (card 2)
 
     printf("Nome da Cidade: %s\n", cidade2);//nome da cidade (card 2)
 
     printf("Numero da população: %d\n", populacao2);//numero da população (card 2)
 
     printf("Area da cidade: %.3f\n", kilometros2);//medimento da Area da(card 2)
 
     printf("O numero do PIB: %.3f\n", PIB2);//numero do PIB da (card 2)
 
     printf("Quantidade de pontos turisticos: %d\n", pontosTuristicos2);//numero de pontos turisticos (card 2)
 
     printf("O valor da Densidade Populacional(população dividido por area) é: %.3f\n", DensidadePopulacional2);

     printf("O valor do PIB per Capita(PIB dividido por população) é: %.3f\n", PIBperCapita2);

     return 0;
 }