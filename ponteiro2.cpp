#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    int v, *p;
    v = 1000;
    p = &v;
    cout << "Valor de v: "<<*p<<endl;
    *p = 2000;
    cout << "O novo valor de v: "<< *p<<endl;
    (*p)++;
    cout << "Valor de v após o incremento de 1: "<< *p<<endl;

    return 0;
}