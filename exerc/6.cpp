#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int qtd_um(int array[], int t){
    if (t == 0){
        return 0;
    }

    int q = 0;
    
    if(array[t-1] == 1)
        q++;
    return q + qtd_um(array, t-1);
}

int main(){
    srand(time(NULL));
    int v[15];
    for (int i = 0; i < 15; i++){
        v[i] = (rand() % 5);
        cout<<v[i]<<endl;
    }

    cout<<"Vezes que aparece 1: "<<qtd_um(v, 15);

    return 0;
}