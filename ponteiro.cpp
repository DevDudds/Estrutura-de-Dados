#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    int v;
    int *p;
    v = 2;
    p = &v;

    cout<<"O valor de v é: "<<v<<endl;
    cout<<"O endereço de v é: "<<p<<endl;
    cout<<"O valor de v é: "<<*p<<endl;
    system("PAUSE");

    return 0;
}