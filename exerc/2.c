#include <iostream>
using namespace std;

int y_calc(int b, int n){
    if (n == 1)
        return b;
    return b * n + y_calc(b, n-1);
}

int main(){

    int valor, vezes;

    cout<<"Digite um valor: ";
    cin>>valor;
    cout<<"Digite quantas vezes: ";
    cin>>vezes;

    cout<<"O valor de y é: "<<y_calc(valor, vezes);

    return 0;
}