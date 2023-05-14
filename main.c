#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
  char input[100];
  fgets(input, 100, stdin);

  while (input != "EXIT") {
    char op[10], id[10], titulo[50], autor[50];
    printf("OI");
    printf("%s", id);


    if(op == "ADD"){//Adicionando registro
         printf("Inserindo");
       //inserindo --- 
     
    }
    else if (op == "SEARCH"){//Buscando resgistros
        printf("buscando");
      //isso tbm precisa ir para uma função 
      
    }else if(op == "REMOVE"){
      printf("Removendo");
      //leva para a função remover 
    }  
    
    fgets(input, 100, stdin);

  }

  return 0;
}
