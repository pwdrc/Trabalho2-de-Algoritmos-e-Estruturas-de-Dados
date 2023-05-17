#define MAX_AUTOR 100
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
  long int bo;
} IndicePrimario;

typedef struct IndiceSecundario {
  char autor[MAX_AUTOR];
  long int bo;
  struct IndiceSecundario *proximo;
} IndiceSecundario;

int inserir_livro(int id, char *titulo, char *autor);
//void buscar_livro(IndicePrimario id);
void remover_livro();
