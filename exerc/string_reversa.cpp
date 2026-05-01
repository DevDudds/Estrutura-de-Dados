#include <iostream>
#include <cstring>
using namespace std;

void backflip_it(char *inicio, char *fim){
    //cout<<endl;
    //for (int i = strlen(string)-1; i >= 0; i--){
    //    cout<<string[i];
    //}

    if (inicio >= fim)
        return;
    char temp = *inicio;
    *inicio = *fim;
    *fim = temp;

    backflip_it(inicio + 1, fim - 1);
}

int main(){

    char nome[20];
    cin.getline(nome, 20);

    backflip_it(nome, &nome[strlen(nome)-1]);

    cout<<"String invertida: "<<nome;

    return 0 ;
}