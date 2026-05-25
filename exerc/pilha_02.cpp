#include <iostream>
#define MAX 100
using namespace std;
   
char pilha[MAX];
int topo = 0;

void push(void);
void pop(void);
void palindromo(void);
void listar(void);

int main()
{ 
    int sair = 1;
    
    while(sair){
        
        cout << endl;
        cout << "Qual sua opcao? (1) inserir, (2) remover, (3) palindromo e (4) sair: ";
        cin >> sair;
        
        switch(sair){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                palindromo();
                break;
            case 4:
                listar();
                break;
            case 5:
                sair = 0;
                break;
            default:
                continue;
        }
    }    
        
    cout << endl;
    return 0;
}   

void push(void)
{
    if(topo >= MAX){
        cout << "PIlha cheia!" << endl;
        return;
    }
    
    cout << "Comece a digitar..." << endl;
    cout << "Qual o valor? ";
    cin >> pilha[topo];
    cout << "Insercao com sucesso" << endl;
    
    topo++;
    
    return;
}

void pop(void)
{
    topo--;
    if(topo < 0){
        cout << "Pilha vazia!" << endl;
        return;
    }
    cout << "Item removido foi: " << pilha[topo] << endl;
    
    return;
}

void palindromo(void){

    if (topo == 0){
        cout<<"Nao tem elementos na pilha";
        return;
    }

    int half, j;
    j = topo-1;
    half = topo/2;
    char start, end;
    bool yes;
    for (int i = 0; i < half; i++, j--){

        start = pilha[i];
        end = pilha[j];

        if (start == end){
            yes = true;
            break;
        } else {
            cout<<"Não é palindromo."<<endl;
            yes = false;
            return;
        }
    }

    cout<<"É um palindromo!";
    return;
}

void listar(void){
    if (topo == 0){
        cout<<"Lista vazia"<<endl;
        return;
    }

    for (int i = 0; i < topo; i++)
        cout<<pilha[i]<<" ";
    
    return;
}