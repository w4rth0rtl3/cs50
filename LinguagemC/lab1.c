/*
Faça um algoritmo que calcule quantos anos demora para população de x crescer ate o valor de y

A cada ano, nascem x/3 e morrem x/4

ao final temos x = x + x/3 - x/4

-> o exercicio deixa explicito que eh para populacao de lhamas, elas vao dominar o mundo 

*/

#include<stdio.h>

int main(){

    //Define as variavies que irei precisar, preferi criar sim uma 
    //para natalidade e mortalidade para ter maior controle 
    int populacao_inicial, populacao_final;
    int natalidade, mortalidade;
    int count_year = 0; //contador de anos, ja deixo zerado para nao ter problema

    //recebe a populacao inicial
    printf("Start size: ");
    fflush(stdin);
    scanf("%d", &populacao_inicial);


    //recebe a populacao final
    printf("End size: ");
    fflush(stdin);
    scanf("%d", &populacao_final);


    //enquanto a populacao inicial for menor que a desejada (final)
    while(populacao_inicial < populacao_final){

        //Calcula natalidade e mortalidade    
        natalidade = populacao_inicial / 3;
        mortalidade = populacao_inicial / 4;

        //Executa a equacao 
        populacao_inicial += natalidade - mortalidade;
        count_year++; //Aumenta 1 ano 
    }

    printf("Vai demorar %d anos ", count_year);

    return 0;
}