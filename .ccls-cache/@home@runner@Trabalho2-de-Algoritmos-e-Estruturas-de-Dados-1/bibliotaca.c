#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "biblioteca.h"
/**
void inserir_livro(char* id, char* titulo, char* autor) {
  //Abrindo arquivo
    FILE *arquivo = fopen("livros.txt", "a");
      //verificando arquivo ta certo
      if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
      }
    //verificar se já há chave igual ou não 
    //escrevendo os registros no arquivo
    fprintf(arquivo, "%s %s %s\n", id, titulo, autor);
    fclose(arquivo);

    //Escrevendo a saida
    //printf("Entrada inserida com sucesso!\n"); - Aqui tem que imprimir oq foi registrado 
}

void buscar_livro() {
   buscar_livros_por_autor(){  }
  

void remover_livro(){
  
}
*/