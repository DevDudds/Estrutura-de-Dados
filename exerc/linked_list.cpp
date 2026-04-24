#include <iostream>
using namespace std;

class Node{
public:
    int Value;
    Node* Next;
};

void printList(Node*n){
    while (n){
        cout<<n->Value<<endl;
        n = n->Next;
    }
}

Node * inserir(Node*n){
    if (t != NULL;){
        cout<<"Desculpe a memoria esta cheia!"<<endl;
        return n;
    }

    Node* t = new Node();
    cout<<"Comece a digitar..."<<endl;
    cout<<"Qual o valor? ";
    cin>>(t->Value);
    cout<<"Valor inserido com sucesso!"<<endl;


    return t;
}

int main(){

    Node* head = NULL;
    // Node* second = new Node();
    // Node* third = new Node();

    // head->Value = 1;
    // head->Next = second;
    // second->Value = 2;
    // second->Next = third;
    // third->Value = 3;
    // third->Next = NULL;

    int opcao;

    while (true) {
        cout<<"\n\t[1] Inserir\n\t[2] Listar"<<endl;
        cout<<"Escolha uma opção: ";
        cin>>opcao;
        
        switch (opcao){
            case 1:
                head = inserir(head);
                break;
            case 2:
                printList(head);
                break;
            default:
                continue;
                break;
        }
    }

    return 0;
}