/*Implemente um tipo abstrato de dados que simule um conjunto de números inteiros. Esse TAD armazena os elementos do conjunto (vetor de inteiros com 10 posições), o seu tamanho (inteiro) e as seguintes funções:*/
//MARIA EDUARDA - 2019003181

typedef struct conjunto Conjunto;

//i) criar conjunto vazio;
Conjunto* criar ();
//ii) preencher um conjunto inicialmente vazio;
void atribuir (Conjunto *,int);
//iii) união de dois conjuntos (se a união estourar o limite de 10 posições essa operação dá um erro e não acontece);
Conjunto* uniao (Conjunto *,Conjunto *);
//iv) interseção de dois conjuntos;
Conjunto* intersecao(Conjunto *,Conjunto *);
//v) diferença entre dois conjuntos;
void diferenca(Conjunto *,Conjunto *);
//vi) verificar se um conjunto está contido no outro;
int contido(Conjunto *,Conjunto *);
//vii) conjunto complementar (use as funções vi e v para facilitar);
//*********ESTÁ NA MAIN********************************
//viii) imprimir os elementos de um conjunto.
void imprimir(Conjunto * );

/*Trate todas as exceções com cuidado para que o TAD resista ao programador destruidor (eu). Por fim, faça um main que utilize todas essas funções. 
Seja utilizando um menu ou executando todas as funções para demonstrar que o programa inteiro está correto e funcionando.*/

