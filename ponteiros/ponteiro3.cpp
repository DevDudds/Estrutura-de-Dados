#include <iostream>
using namespace std;

int main(){

    float v = 9.8;
    float *p;
    p = &v;
    cout << "Valor de v: " << *p <<endl;
    cout << "Endereço de v: " << p <<endl;
    p++;
    cout << "Valor de P incrementado: " << p <<endl;
    cout << "Valor da posição de memória agora apontada por p: "<<*p<<endl;
    return 0;
}