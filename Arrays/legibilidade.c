/*
Implemente um programa que calcule o nível (representado a partir de uma série, como na escola)
aproximado necessário para compreender algum texto, conforme a seguir.

índice = 0,0588 * L - 0,296 * S - 15,8

L = numero de letras por 100 palavras
S = numero de frases por 100 frases.

Palavras maiores devem gerar um nivel de leitura mais alto
mais palavras por frase deve getar um nivel de leitura mais alto

*/


#include <stdio.h>
#include <math.h>>

int main(){

    char texto[4000];

    printf("Digite o seu texto aqui:\n");
    fgets(texto, 4000,stdin);

    printf("%s", texto);
    printf("Tamanho: %ld\n", sizeof(texto)); // \0 para definir o fim da estrutura 


    int i = 0; // qtd_letras
    int qtd_palavras = 1;
    int qtd_frases = 1;

    while(i <= sizeof(texto)){
        printf("%c", texto[i]);
        
        if(texto[i + 1] == '\0'){
            printf("\n");
            break;
        }
        if(texto[i] == 32){
            //printf("\n\nespaco\n\n");
            qtd_palavras++;
        }

        if(texto[i] == '.' || texto[i] == '?' || texto[i] == '!'){
            qtd_frases++;
        }

        i++;
    };

    //i = i - sizeof(texto);
    printf("Real tamanho %d\n", (i - qtd_palavras) / 100);
    printf("Qtd palvras %d\n", qtd_palavras);
    printf("Qtdd frases: %d\n", qtd_frases / 100);
    

    int coleman_liau = (0.0588 * (i / ((float) qtd_palavras / 100)) - 0.296 * (qtd_frases / ((float)qtd_palavras / 100)));


    printf("Legibilidade: %d", coleman_liau - 21); //esse - 21 eh a diferenca do meu calculo para o esperado kk 
    
    
    return 0;
}