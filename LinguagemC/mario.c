/*
O programa que escreveremos se chamará mario. E vamos permitir que o usuário decida qual deve ser a altura da pirâmide, primeiro solicitando um número inteiro positivo entre, digamos, 1 e 8, inclusive.

Veja como o programa pode funcionar se o usuário inserir 8 quando solicitado:
$ ./mario
Tamanho: 8               
       #
      ##
     ###
    ####
   #####
  ######
 #######
########


########
#######
######
#####
####
###
##
#
*/



#include <stdio.h>

int main(){

    int base, i, tot, j;
    
    //printf("%*s", 10, "");
    //printf("a\n");
    do{
    printf("Quantos tijolos para a base da piramide (1 - 8)\n>");
    scanf("%d", &base);
    }while(base > 8 || base < 1);

    for(i = 0; i < base; i++){

        
        for(j = base; (j - i) > 1; j--){
            printf(" ");
        }
        for(j = 0; j <= i; j++){
            printf("#");
        }
        printf("\n");
        
    }
    
    return 0;
}


// espacos + quantidade = resultado
// espaco eh inversamente proporcional a quantidade