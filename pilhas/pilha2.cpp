#include <iostream>
using namespace std;

struct teste {
    int a;
    struct teste *prox;
};

struct teste * push(struct teste *q);
struct teste * pop(struct teste *q);

int main(){
    struct teste *p = NULL;
    int opcao, i = 1;

    while(true){
        cout << endl;
        cout<<"["<<i<<"]Qual sua opção?";
        cout<<"\n\t[1] Inserir \n\t[2] Remover\n\t[3] Sair"<<endl;
        cin >> opcao;
        i++;
        switch(opcao){
            case 1:
                p = push(p);
                break;
            case 2:
                p = pop(p);
                break;
            case 3:
                return 0;
            default:
                continue;
        }
    }
}

struct teste * push(struct teste *q){
    struct teste *t;

    t = new struct teste;

    if (!t){
        cout<<"Não tem memória disponível!"<<endl;
        return q;
    }
    cout << "Comece a digitar..." <<endl;
    cout << "Qual o valor? ";
    cin >> (t->a);

    t->prox = q;

    cout << "Inserção com sucesso!" <<endl;

    return t;
}

struct teste * pop(struct teste *q){
    if(!q){
        cout << "Pilha vazia!" << endl;
        return q;
    }

    struct teste *t;
    t = q->prox;
    cout << "Valor removido: " << (q->a) << endl;
    delete q;

    return t;
}
