#include <iostream>
using namespace std;

class list {
public:
    int data;
    list* next;
};

list * inserir (list *head);
list * remover (list *head);
void listar_lista (list *head);


int main(){

    list *item = (nullptr);
    int opcao;

    do {
        cout<<"\t[1] Inserir\n\t[2] Listar\n\t[3] Remover\n\t[4] Sair\n";
        cin>>opcao;
        switch (opcao){
            case 1:
                item = inserir(item);
                break;
            case 2:
                listar_lista(item);
                break;
            case 3:
                item = remover(item);
                break;
            case 4:
                return 0;
                break;
            default:
                cout<<"Valor invalido."<<endl;
                continue;
            break;
        }
    } while (opcao != 5);
}

list * inserir (list *head){
    
    list *novo_item, *auxiliar;

    novo_item = new list;

    if (!novo_item){
        cout<<"Sem memoria disponivel."<<endl;
        return head;
    }

    cout<<"Digite o valor para o item da lista: ";
    cin>>novo_item->data;
    novo_item->next = (nullptr);

    if (!head || novo_item->data < head->data){
        cout<<"Inserido com sucesso!"<<endl;
        novo_item->next = head;
        return novo_item;
    } else {
        auxiliar = head;
        while(auxiliar->next && novo_item->data < auxiliar->next->data){
            auxiliar = auxiliar->next;
        }
        novo_item->next = auxiliar->next;
        auxiliar->next = novo_item;
    }

    cout<<"Inserido com sucesso!"<<endl;
    return head;
}

void listar_lista (list *head){
    if (!head){
        cout<<"Lista vazia."<<endl;
        return;
    }
    while (head){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

list * remover (list *head){
    if (!head){
        cout<<"Lista vazia!"<<endl;
        return head;
    }

    list *auxiliar, *item;
    int valor;
    cout<<"Digite o valor a ser removido: ";
    cin>>valor;

    if (head->data == valor){
        auxiliar = head->next;
        free(head);
        cout<<"Remocao com sucesso!"<<endl;
        return auxiliar;
    }
    item = head->next;
    auxiliar = head;
    while (item){
        if (item->data == valor){
            auxiliar->next = item->next;
            free(item);
            cout<<"Removido com sucesso!"<<endl;
            return head;
        }
        auxiliar = item;
        item = item->next;
    }
    
    cout<<"Valor nao encontrado"<<endl;
    return head;
}