#include <iostream>
using namespace std;

struct fila {
    int a;
    struct fila *prox;
};

struct fila * qstore(struct fila *q);
struct fila * qretrieve(struct fila *q);

int main(){

    struct fila *p = NULL;

    int opcao;

    while (true){
        cout<<endl;
        cout<<"Digite a opção: ";
        cout<<"\n\t1 - Inserir\n\t2 - Remover\n\t3 - Sair"<<endl;
        cin>>opcao;
        switch (opcao){
            case 1:
                p = qstore(p);
                break;
            case 2:
                p = qretrieve(p);
                break;
            case 3:
                return 0;
            break;
            default:
                continue;
        }
    }
}

struct fila * qstore(struct fila *q){
    struct fila *t, *aux;

    t = new struct fila;

    if (!t){
        cout<<"Sem memoria disponivel."<<endl;
        return q;
    }
    cout<<"Comece a digitar.."<<endl;
    cout<<"Qual o valor? ";
    cin>>(t->a);
    
    t->prox = NULL;

    if (!q){
        cout<<"Inserido com sucesso!"<<endl;
        return t;
    }

    aux = q;

    while(aux->prox)
        aux = aux->prox;

    aux->prox = t;

    cout<<"Inserção com sucesso!"<<endl;

    return q;
}

struct fila * qretrieve(struct fila *q){
    if (!q){
        cout<<"Fila vazia!"<<endl;
        return q;
    }

    struct fila *aux;
    aux = q->prox;

    cout<<"Item deletado: " << q->a <<endl;
    delete q;

    return aux;
}