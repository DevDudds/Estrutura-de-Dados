#include <iostream>
using namespace std;

int y(int x){
    if (x == 1)
        return 1;
    return x*x + y(x-1);
}

int main(){
    int valor;

    do {
        cout<<endl<<"Digite um valor: ";
        cin>>valor;
    } while (valor <= 0);

    cout<<"O valor de y é: "<<y(valor);
    
    return 0;
}