/*
Implemente um programa que criptografa mensagens usando a cifra de César, conforme a seguir.

$ ./caesar 13
plaintext: HELLO
ciphertext: URYYB
*/


// Repare que o programa pede um argumento

#include <stdio.h>

int main(int argc, char *argv[])
{

    // Pesquisei na internet 
  
    int cipher = atoi(argv[1]); // var inteira que converte o que estiver em a(str) para int
    
  //  printf("%d Parametro: %d\n", 0, num);


    char texto[100];
    printf("plaintext: ");
    fgets(texto, 50, stdin);

    printf("%s\n", texto);
    printf("%d\n", cipher);

    int i;
    for(i = 0; i < sizeof(texto); i++){
        if(texto[i] != '\0'){
            printf("%c ", texto[i] + cipher);
        }
        else{
            break;
        }
    }
  
    return 0;
}
