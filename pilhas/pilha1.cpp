#include <iostream>
#define MAX 100
using namespace std;

int push(int *q, int t);
int pop(int *q, int t);

int main (){
    int pilha[MAX];
    int topo = 0;
    int opcao;
    int i = 1;

    while (true){
        cout <<endl;
        cout<<"["<<i<<"]Qual sua opção?";
        cout<<"\n\t[1] Inserir \n\t[2] Remover\n\t[3] Sair"<<endl;
        cin >> opcao;
        i++;

        switch(opcao){
            case 1:
                topo = push(pilha, topo);
                break;
            case 2:
                topo = pop(pilha, topo);
                break;
            case 3:
                return 0;
            default:
                continue;
        }
    }
}

int push(int *q, int t){
    if (t >= MAX){
        cout << "Pilha cheia!" << endl;
        return t;
    }
    cout << "Comece a digitar..." <<endl;
    cout << "Qual o valor? ";
    cin >> q[t];
    cout << "Inserção com sucesso" << endl;

    t++;

    return t;
}

int pop (int *q, int t){
    t--;
    if (t < 0){
        cout << "Pilha vazia!" << endl;
        return 0;
    }
    cout << "Item removido foi: " << q[t] << endl;

    return t;
}