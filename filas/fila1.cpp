#include <iostream>
#define MAX 100
using namespace std;

int qstore(int *q, int t);
int qretrieve(int *q, int t);
void ajustaFila(int *q, int t);

int main(){

    int cauda = 0;
    int opcao;
    int fila[MAX];

    while (true){
        cout<<endl;
        cout<<"Digite a opção: ";
        cout<<"\n\t1 - Inserir\n\t2 - Remover\n\t3 - Sair"<<endl;
        cin>>opcao;
        switch (opcao){
            case 1:
                cauda = qstore(fila, cauda);
                break;
            case 2:
                cauda = qretrieve(fila, cauda);
                break;
            case 3:
                return 0;
            break;
            default:
                continue;
        }
    }
}

int qstore(int *q, int t){
    if (t >= MAX){
        cout<<"A fila esta cheia!"<<endl;
        return t;
    }

    cout<<"Comece a digitar.."<<endl;
    cout<<"Qual o valor? ";
    cin>>q[t];
    cout<<"Inserção com sucesso!"<<endl;

    t++;

    return t;
}

int qretrieve(int *q, int t){
    t--;
    if (t < 0){
        cout<<"A fila esta vazia."<<endl;
        return t;
    }
    cout<<"Item removido foi: "<<q[0]<<endl;

    ajustaFila(q, t);

    return t;
}

void ajustaFila(int *q, int t){
    for (int i = 0; i < t; i++)
        q[i] = q[i+1];

    return;
}