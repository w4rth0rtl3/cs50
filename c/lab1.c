/*
Faça um algoritmo que calcule quantos anos demora para população de x crescer ate o valor de y

A cada ano, nascem x/3 e morrem x/4

ao final temos x = x + x/3 - x/4

*/

#include<stdio.h>

int main(){

    int populacao_inicial;
    int populacao_final;
    int natalidade, mortalidade;
    int count_year;

    printf("Start size: ");
    fflush(stdin);
    scanf("%d", &populacao_inicial);


    
    printf("End size: ");
    fflush(stdin);
    scanf("%d", &populacao_final);


    while(populacao_inicial < populacao_final){
        natalidade = populacao_inicial / 3;
        mortalidade = populacao_inicial / 4;

        populacao_inicial += natalidade - mortalidade;
        count_year++;
    }

    printf("Vai demorar %d anos ", count_year);

    return 0;
}