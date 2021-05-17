typedef struct Pilha pilha;
typedef pilha* pilhaPtr;

void clean_stdin();
void menu();
void push(pilhaPtr*,char);
int pop(pilhaPtr*);
char retornaTopo(pilhaPtr topo);
int cheia(pilhaPtr);
void validar(pilhaPtr*);