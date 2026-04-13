#include <iostream>
#include <cstring>
using namespace std;

void backflip_it(char *string){
    cout<<endl;
    for (int i = strlen(string)-1; i >= 0; i--){
        cout<<string[i];
    }
}

int main(){

    char *ptr, nome[20];
    cin.getline(nome, 20);
    ptr = nome;
    backflip_it(ptr);

    return 0 ;
}