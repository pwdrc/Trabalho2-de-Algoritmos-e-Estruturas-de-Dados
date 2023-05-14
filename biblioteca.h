#define MAX_AUTOR 50
#define MAX_TITULO 100
#define MAX_LIVROS 1000

/**
typedef struct Livro {
  int id;
  char autor[MAX_AUTOR];
  char titulo[MAX_TITULO];
} Livro;
*/

typedef struct IndicePrimario {
  int id;
  int bo;
} IndicePrimario;

typedef struct IndiceSecundario {
  char autor[MAX_AUTOR];
  int bo;
  struct IndiceSecundario* proximo;
} IndiceSecundario;

void inserir_livro(char* id, char* titulo, char* autor);
void buscar_livro();
void remover_livro();
