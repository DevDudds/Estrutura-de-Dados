#include <iostream>
using namespace std;

void busca(int x, int *s, int i, int n);

int main() {
    int x, n = 10, lista[n], comeco = 0, fim = 9;
    for (int i = 0; i < n; i++)
        cin>>lista[i];
    cout<<"Digite qual número procura: ";
    cin>>x;
    cout<<endl;
    busca(x, lista, comeco, fim);

    return 0;
}

void busca(int x, int *s, int i, int n){
    if (i >= n){
        cout<<"Valor não encontrado."<<endl;
        return;
    } 
    if (s[i] == x){
        cout<<"Resultado encontrado na posição: "<<i<<endl;
        return;
    }
    busca(x, s, i+1, n);
}
