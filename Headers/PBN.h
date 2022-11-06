#define N 20


void inicia_matriz(int matriz[N][N]);

void inclui_aresta(int linha, char *valor_lido, int matriz[N][N]);

void imprime_matriz(int matriz[N][N]);

void constroi_matriz(int matriz[N][N], char *nome_arquivo);

int atualiza_vetor(int *k, int *vetor);

int verifica_sequencia(int vetor_binario[N], int matriz_adjacente[N][N]);
