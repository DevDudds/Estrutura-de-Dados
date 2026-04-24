#include <iostream>
using namespace std;

void ant(int x){
    if (x == 0)
        return;
    cout<<x<<endl;
    ant (x-1);
    return;
}

int main(){
    int valor;
    while (valor <= 0){
        cout<<"Digite um valor: "
        cin>>valor;
        if (valor <= 0){
            printf("Valor inválido: ");
        }
    }

    ant (valor);

    return 0;
}