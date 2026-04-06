#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

char * retornaPosicao(char *s, int posicao);

int main(){

    // Retornando ponteiro

    char *pot, string[20];
    int onde;
    cin.getline(string, 20);
    cin >> onde;
    pot = retornaPosicao(string, onde);
    cout << pot << endl;

    return 0;
}

char * retornaPosicao(char *s, int posicao){
    if (posicao >= strlen(s))
        return (char*)"Erro";
    return &s[posicao-1];
}