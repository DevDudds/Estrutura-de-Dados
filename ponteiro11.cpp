#include <iostream>
using namespace std;

void soma_cinco(int *q){
    *q = *q + 5;
    return;
}

int main(){
    int *p, v = 100;
    p = &v;
    cout<<"Valor de v: "<<*p<<endl;
    soma_cinco(p);
    cout<<"Novo valor de v: "<<*p<<endl;

    return 0;
}