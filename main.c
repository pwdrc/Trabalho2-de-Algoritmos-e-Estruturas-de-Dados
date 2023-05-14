#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM_TITULO 100
#define TAM_AUTOR 50

int main() {

  int id;
  char titulo[TAM_TITULO];
  char autor[TAM_AUTOR];

  char op[12];

  do {

    scanf("%s", op);
    if (strcmp(op, "EXIT") == 0)
      break;
    //printf("%s", op);

    else if(strcmp(op, "ADD") == 0) {
      if (scanf("id='%d' titulo='%[^']' autor='%[^']'", &id, titulo, autor) == 3) {
        printf("adicionando %d %s %s\n", id, titulo, autor);
      } else {
        printf("Comando de adição inválido\n");
      }
    }
      
    else if(strcmp(op, "SEARCH") == 0) {
      if (scanf("autor='%49[^']'", autor) == 1) {
        // Realizar busca por autor
        printf("Buscar por autor: %s\n", autor);
        
      } else if (scanf("id='%d'", &id) == 1) {
        // Realizar busca por ID
        printf("Buscar por ID: %d\n", id);
    
      } else {
        // Comando de busca inválido
        printf("Comando de busca inválido\n");
      }
    }

    else if(strcmp(op, "REMOVE") == 0) {
      printf("remover");
    }

    else {
      printf("comando não encontrado\nsaindo...");
      break;
    }

  } while (strcmp(op, "EXIT") != 0);

  return 0;
}
