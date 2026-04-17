#include <iostream>
using namespace std;

struct teste{
    int a;
    struct teste *prox;
};

struct teste * inserir(struct teste *q);
struct teste * remover(struct teste *q);
void ordenar(struct teste *q);
void listar(struct teste *q);

int main(){
    struct teste *p = NULL;

    int opcao;

    while(true){
        cout<<endl;
        cout<<"Qual sua opcao? "<<endl;
        cout<<"\t[1] Inserir\n\t[2] Remover\n\t[3] Listar\n\t[4] Ordenar\n\t[5] Sair"<<endl;
        cin>>opcao;
        switch(opcao){
            case 1:
                p = inserir(p);
                break;
            case 2:
                p = remover(p);
                break;
            case 3:
                listar(p);
                break;
            case 4:
                ordenar(p);
                break;
            case 5:
                return 0;
            default:
                continue;
        }
    }
}

struct teste * inserir(struct teste *q){
    struct teste *t, *aux;
    t = (struct teste *) malloc(sizeof(struct teste));

    if (!t){
        cout<<"Nao tem memoria disponivel!"<<endl;
        return q;
    }

    cout<<"Comece a digitar..."<<endl;
    cout<<"Qual o valor? ";
    cin>>(t->a);

    t->prox = NULL;

    if(!q){
        cout<<"Insercao com sucesso!"<<endl;
        return t;
    } else {
        aux = q;

        while(q->prox)
            q = q->prox;

        q->prox = t;
    }

    cout<<"Insercao com sucesso!"<<endl;
    return aux;
}

void listar(struct teste *q){
    if(!q){
        cout<<"Nao ha numeros para listar!"<<endl;
        return;
    }
    cout<<"Listando..."<<endl;
    do{
        cout<< q->a<<endl;
        q = q->prox;
    } while(q);

    return;
}

struct teste * remover(struct teste *q){
    if(!q){
        cout<<"Lista vazia!"<<endl;
        return q;
    }

    int valor;
    cout<<"Qual valor quer remover?";
    cin>>valor;
    struct teste *t, *aux;
    if ((q->a) == valor){
        aux = q->prox;
        free(q);
        cout<<"Remocao com sucesso!"<<endl;
        return aux;
    }
    t = q->prox;
    aux =q;
    while(t){
        if((t->a) == valor){
            aux->prox = t->prox;
            free(t);
            cout<<"Remocao co sucesso!"<<endl;
            return q;
        }
        aux = t;
        t = t->prox;
    }
    cout<<"Valor nao encontrado!"<<endl;
    return q;
}

// Função para ordenar a lista

void ordenar(struct teste *q){              
    if (!q) return;                     // Ou seja, se q == NULL; lista vazia.
    struct teste *aux1;                 //variavel auxiliar para troca de valores;
    struct teste *laux = NULL;          //variavel que define ate onde a lista esta ordenada
    bool trocou;                        //variavel bool para controle de trocas, se ela for true significa que ainda precisa de trocas

    do {                                // inicio do loop
        trocou = false;                 // assumindo trocou = false para assumir que a lista nao precisa de trocas
        aux1 = q;                       // aux1 vira a head da lista

        while (aux1->prox != laux){     
            if (aux1->a > aux1->prox->a){
                int temp = aux1->a;
                aux1->a = aux1->prox->a;
                aux1->prox->a = temp;
                trocou = true;
            }
            aux1 = aux1->prox;
        }
        laux = aux1;
    } while (trocou);
}