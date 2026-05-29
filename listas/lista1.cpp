#include <iostream>
using namespace std;

struct lista{
    int valor;
    struct lista *prox;
};

lista * inserir(struct lista *item);
lista * remover(struct lista *item);
// void ordenar(struct teste *item);
void listar(struct lista *item);

int main(){
    struct lista *p = NULL;

    int opcao;

    while(true){
        cout<<endl;
        cout<<"Qual sua opção? "<<endl;
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
              //  ordenar(p);
                break;
            case 5:
                return 0;
            default:
                continue;
        }
    }
}

struct lista * inserir(struct lista *item){
    struct lista *t, *aux;
    t = (struct lista *) malloc(sizeof(struct lista));
    
    if (!t){
        cout<<"Nao tem memoria disponivel!"<<endl;
        return item;
    }
    
    cout<<"Comece a digitar..."<<endl;
    cout<<"Qual o valor? ";
    cin>>(t->valor);

    t->prox = NULL;

    if(!item || item->valor > t->valor){
        cout<<"Insercao com sucesso!"<<endl;
        
        return t;
    } else {
        aux = item;

        while(item->prox){
            item = item->prox;
        }
        
        item->prox = t;
    }

    cout<<"Insercao com sucesso!"<<endl;
    return aux;
}

void listar(struct lista *item){
    if(!item){
        cout<<"Nao ha numeros para listar!"<<endl;
        return;
    }
    cout<<"Listando..."<<endl;
    do{
        cout<< item->valor<<endl;
        item = item->prox;
    } while(item);
    return;
}

struct lista * remover(struct lista *item){
    if(!item){
        cout<<"Lista vazia!"<<endl;
        return item;
    }

    int valor;
    cout<<"Qual valor quer remover?";
    cin>>valor;
    struct lista *t, *aux;
    if ((item->valor) == valor){
        aux = item->prox;
        free(item);
        cout<<"Remocao com sucesso!"<<endl;
        return aux;
    } // lista atual = [2, 3, 4]
    t = item->prox;
    aux = item; 
    while(t){                   // valor = 4, t = 4, aux = 3
        if((t->valor) == valor){
            aux->prox = t->prox;
            free(t);
            cout<<"Remocao co sucesso!"<<endl;
            return item;
        }
        aux = t;
        t = t->prox;
    }
    cout<<"Valor nao encontrado!"<<endl;
    return item;
}

// Função para ordenar a lista

/*
void ordenar(struct lista *item){              
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

*/