#include "biblioteca.h"
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT_SIZE 200

int main() {
  char input[MAX_INPUT_SIZE];

  while (fgets(input, MAX_INPUT_SIZE, stdin)) {

    // tratar o comando ADD
    if (strncmp(input, "ADD", 3) == 0) {
      int id;
      char titulo[100];
      char autor[100];

      sscanf(input, "ADD id='%d' titulo='%99[^\n]' autor='%99[^\n]'", &id, titulo, autor);
      
      inserir_livro(id, titulo, autor);

    } else if (strncmp(input, "SEARCH", 6) == 0) {
      
      // Tratar comando SEARCH
      if (strstr(input, "autor='") != NULL) {
        
        // Comando SEARCH por autor
        char autor[MAX_INPUT_SIZE];
        sscanf(input, "SEARCH autor='%[^\n]", autor);
        printf("Buscar por autor: %s\n", autor);
        // Realizar a busca por autor
        // ...
      } else if (strstr(input, "id='") != NULL) {
        // Comando SEARCH por ID
        int id;
        sscanf(input, "SEARCH id='%d'", &id);

        //  IndicePrimario id;

        // printf("Buscar por ID: %d\n", id);
        //  Realizar a busca por ID
        // buscar_livro(&id);
      } else {
        printf("Comando de busca inválido\n");
      }
    } else if (strncmp(input, "REMOVE", 6) == 0) {
      // Tratar comando REMOVE
      // ...
    } else if (strncmp(input, "EXIT", 4) == 0) {
      // Tratar comando EXIT
      printf("Saindo...\n");
      break;
      
    } else {
      printf("Comando inválido\n");
    }
  }

  return 0;
}