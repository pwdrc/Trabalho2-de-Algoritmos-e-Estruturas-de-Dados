#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "biblioteca.h"

int inserir_livro(int id, char* titulo, char* autor) {

    // Abrindo arquivos - registros e índices
    FILE* registro = fopen("livros.txt", "a");
    FILE* primario = fopen("primario.txt", "a");
    FILE* secundario = fopen("secundario.txt", "a");

    IndicePrimario* p = (IndicePrimario*)malloc(sizeof(IndicePrimario));
    IndiceSecundario* s = (IndiceSecundario*)malloc(sizeof(IndiceSecundario));

    // Verificando se os arquivos foram abertos corretamente
    if (registro == NULL || primario == NULL || secundario == NULL || p == NULL || s == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    // Escrevendo os registros no arquivo

    // Arquivo primário
    fseek(primario, 0, SEEK_END);
    p->bo = ftell(primario);
    p->id = id;
    fprintf(primario, "bo:%ld\n", p->bo);
    fprintf(primario, "id:%d\n\n", p->id);
    // fim do registro
    
    //fprintf(primario, "%d %ld\n", p->id, p->bo);

    // Arquivo secundário
    fseek(secundario, 0, SEEK_END);
    s->bo = ftell(secundario);
    strcpy(s->autor,autor);
    fprintf(secundario, "bo:%ld\n", s->bo);
    fprintf(secundario, "id:%d\n\n", p->id);
    // fim do registro

    // registo de livros
    fseek(registro, 0, SEEK_END);
    long int bo = ftell(registro);
    fprintf(registro, "bo:%ld\n", bo);
    fprintf(registro, "id:%d\n", id);
    fprintf(registro, "titulo:%s\n", titulo);
    fprintf(registro, "autor:%s\n\n", autor);

    
    fclose(secundario);
    fclose(primario);
    fclose(registro);
    free(p);
    free(s);

    printf("Entrada inserida com sucesso!\n");
    return 0;
}

int busca_primaria();

int busca_secundaria();

/**
void buscar_livro(IndicePrimario id){
int registro;
 FILE *arquivo = fopen("livros.txt", "r");
    //verificando arquivo ta certo
  if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo!\n");
    return 1;
  }

   while (!feof(arquivo)) {
        fread(&registro, sizeof(registro), 1, arquivo);

        if (registro -> id == id){
            printf("Registro encontrado:\n");
            printf("ID: %d\n", registro -> id);
            // Exibir outros campos de dados, se houver
            break; // Encerra o loop, pois o registro foi encontrado
        }
    }

    // Verifica se o registro não foi encontrado
    if (feof(arquivo)) {
        printf("Não encontrado.");
    } 

  */
  

