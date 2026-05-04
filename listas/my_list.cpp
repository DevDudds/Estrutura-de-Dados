#include <iostream>
using namespace std;

struct lista {
    int data;
    struct lista *next;
};

struct lista * inserir(struct lista *h);
void listar(struct lista *h);

int main(){

    struct lista *head= NULL;
    int opcao;

    do {
        cout<<"\n\t1 - Inserir\n\t2 - Listar"<<endl;
        cout<<"Escolha uma opcao: ";
        cin>>opcao;

        switch (opcao){
            case 1:
                head = inserir(head);
            break;
            case 2:
            //    head = remover(head);
            break;
            case 3:
                listar(head);
            break;
            case 0:
                return 0;
            break;

            default:
                continue;
            break;
        }
    } while (opcao != 0);
}

struct lista * inserir(struct lista *h){
    struct lista *t, *aux, *a;
    t = new lista;
    // Só vai cair nesse if caso o comando acima não seja executado por falta de memória, ai ele verifica que não existe um t,
    // retornando a cabeça da lista e dizendo ao usuário que não tem memória.
    if (!t){
        cout<<"Sem memoria disponivel."<<endl;
        return h;
    }

    cout<<"Digite o valor para listar: ";
    cin>>(t->data);

    t->next = NULL;

    if (!h || t->data < h->data){
        cout<<"Valor inserido com sucesso!";
        t->next = h;
        return t;
    } else {
        aux = h;
        while (aux->next && aux->next->data < t->data){
            aux = aux->next;
        }
        t->next = aux->next;
        aux->next = t;
    }

    cout<<"Valor inserido com sucesso!";
    return h;
}

void listar(struct lista *h){
    while(h){
        cout<<"Valor: "<<h->data<<" | Endereço: "<<&h->data<<endl;
        h = h->next;
    }
}