/*
Crie um algoritmo que facilite o troco,
contendo moedas que irão do valor de 1, 5, 10 e 25 
O algoritmo ira decidir qual o melhor conjunto de moedas para um troco
visando entregar o minino de moedas possivel

*/


#include <stdio.h>

int main(){

    int moedas;

    printf("Digite quantos centavos de troco: 0.");
    scanf("%d", &moedas);    
    
    //printf("%d\n", moedas);
    
    
    printf("Voce deve entregar 0.%d com as seguintes moedas:\n", moedas);

    while(moedas > 0){


        if(moedas <= 0){
            printf("Moeda: %d\n", moedas);
            break;
        }

        if(moedas >= 25){
            printf("Moeda: 25\n");
            moedas -= 25;    
        }
        
        if(moedas >= 10 && moedas < 25){
            printf("Moeda: 10\n");
            moedas -= 10;    
        }

        
        if(moedas >= 5 && moedas < 10){
            printf("Moeda: 5\n");
            moedas -= 5;    
        }
        
        if(moedas >= 1 && moedas < 5){
            printf("Moeda: 1\n");
            moedas -= 1;    
        }

    }
   // printf("Moeda: %d\n", moedas);
    
    return 0;
}
