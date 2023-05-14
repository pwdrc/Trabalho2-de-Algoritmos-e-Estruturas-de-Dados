#define MAX_AUTOR 50
#define MAX_TITULO 100
#define MAX_LIVROS 1000

typedef struct {
    int id;
    char autor[MAX_AUTOR];
    char titulo[MAX_TITULO];
} Livro;

typedef struct {
    int id;
    int offset;
} IndicePrimario;

typedef struct {
    char autor[MAX_AUTOR];
    int offset; // int id
} IndiceSecundario;

void inserir_livro(char* id, char* titulo, char* autor);
void buscar_livro();
void remover_livro();
