#include <iostream>
using namespace std;

int f(int a){
    if (a == 0)
        return 0;

    return a + f(a-1);
}

int fa(int a){
    if (a == 0){
        return 0;
    }

    int j, i;

    for (i = 0, j = 0; i <= a; i++){
        j = j+i;
    }

    return j;
}

int main(){

    int valor = 15;

    cout<<f(valor)<<endl;
    cout<<fa(valor);

    return 0;
}