/*
Implemente as funções em helpers.c de forma que um usuário possa aplicar filtros de grayscale, sépia, refletir ou blur às suas imagens.

    A função grayscale deve pegar uma imagem e transformá-la em uma versão em preto e branco da mesma imagem.
    A função de reflect deve pegar uma imagem e refleti-la horizontalmente.
    A função de blur deve pegar uma imagem e transformá-la em uma versão desfocada da mesma imagem.
    A função de edges deve pegar uma imagem e destacar as bordas entre os objetos, de acordo com o operador Sobel.

Você não deve modificar nenhuma das assinaturas de função, nem deve modificar nenhum outro arquivo além de helpers.c.


$ ./filter -g infile.bmp outfile.bmp
$ ./filter -r infile.bmp outfile.bmp
$ ./filter -b infile.bmp outfile.bmp
$ ./filter -e infile.bmp outfile.bmp
*/



#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    printf("\nParametro: %s\n", argv[1]);
    printf("\nParametro: %s\n", argv[2]);


    FILE *pont_arq_in; // cria variável ponteiro para o arquivo
   
    //abrindo o arquivo com tipo de abertura w
    pont_arq_in = fopen(argv[2], "r");
    
    //testando se o arquivo foi realmente criado
    if(pont_arq_in == NULL)
    {
    printf("Erro na abertura do arquivo!");
    return 1;
    }



     FILE *pont_arq_out; // cria variável ponteiro para o arquivo
   
    //abrindo o arquivo com tipo de abertura w
    pont_arq_out = fopen(argv[2], "r");
    
    //testando se o arquivo foi realmente criado
    if(pont_arq_out == NULL)
    {
    printf("Erro na abertura do arquivo!");
    return 1;
    }
   

    int x, y;


    char c;

    // Le cada byte do arquivo passado
    do
    {  
        //faz a leitura do caracter no arquivo apontado por pont_arq
        c = fgetc(pont_arq_in);
        
        //exibe o caracter lido na tela
        printf("%c" , c);        
    }while (c != EOF);//enquanto não for final de arquivo 
    
    printf("\n");
    fclose(pont_arq_in);
    
    printf("Dados gravados com sucesso!");

    //verifica a quantidade de parametro
    if(argc != 4){
        printf("Usage: %s -parameters input.bmp output.bmp", argv[0]);
        return 1;
    }


    // verifica a opcao escolhida

    //dentro de cada uma vai ter uma função da help.c
    if(strcmp(argv[1], "-g") == 0){
        printf("\n-g\n");
    }

    
    if(strcmp(argv[1], "-r") == 0){
        printf("\n-r\n");
    }

    if(strcmp(argv[1], "-b") == 0){
        printf("\n-b\n");
    }

    if(strcmp(argv[1], "-e") == 0){
        printf("\n-e\n");
    }

    else{
        printf("Usage: %s -parameters input.bmp output.bmp", argv[0]);
        return 1;
    }


    return 0;
}