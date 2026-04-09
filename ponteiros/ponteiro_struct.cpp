#include <iostream>
#define Class struct
using namespace std;

Class Pessoa {
  char nome[10];
  int idade;
  float altura;
};

int main() {
        
    Class Pessoa *pessoa = new Pessoa;
    cout<<"Digite o nome, idade e altura da pessoa: "<<endl;
    cin>>(pessoa->nome);
    cin>>(pessoa->idade);
    cin>>(pessoa->altura);

    cout<<endl<<"Dados\tEndereços"<<endl;
    cout<<pessoa->nome<<"\t"<<&pessoa->nome<<endl;
    cout<<pessoa->idade<<"\t\t"<<&pessoa->idade<<endl;
    cout<<pessoa->altura<<"\t"<<&pessoa->altura<<endl;
    
    delete pessoa;
    
    return 0;
}