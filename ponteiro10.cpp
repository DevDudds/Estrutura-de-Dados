#include <iostream>
using namespace std;

int main(){
    int *p, x = 99;
    p = 0;
    cout << "Valor do ponteiro p: "<<p<<endl;
    p = &x;
    cout<<"Novo valor de p: "<<p<<endl;
    cout<<"Valor de x: " <<*p<<endl;

    return 0;
}