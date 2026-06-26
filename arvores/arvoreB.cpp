#include <iostream>
#include <cstdlib>
using namespace std;

struct Node {
   int data;
   struct Node *esquerda;
   struct Node *direita;
};

struct Node * Inserir(struct Node *p, struct Node *q, int valor);
struct Node * Remover(struct Node *p, int valor);
void Listar(struct Node*p, int level);

int main(){
    int opcao, valor;
    struct Node *root = NULL, *q²;
	
    do {
      cout<<endl<<"\t(1) Inserir \n\t(2) Remover \n\t(3) Listar \n\t(4) Sair: ";
      cin>>opcao;
      switch (opcao){
	 case 1:
	    cout<<"Qual o valor? ";
	    cin>>valor;
	    if(!root) root = Inserir(root, root, valor); //Inserindo na raiz
	    else Inserir(root, root, valor); //Inserindo nas sub-arvores
	 break;
	 case 2:
	    cout<<"Qual o valor? ";
	    cin>>valor;
	    root = Remover(root, valor);
	 break;
	 case 3:
	    cout<<"\nListando:"<<endl;
	    Listar(root, 0);
	 break;
	 case 4:
	    cout<<"Saindo do programa!";
	    return 0;
	 break;
	 default:
	    continue;
	 break;
    }
   } while (opcao != 4);
}

struct Node *Inserir(struct Node *p, struct Node *q, int valor){
   if (!q){
   q = new struct Node;
      if (!q){
         cout<<"No memory available"<<endl;
	 exit(0);
      }

      q->esquerda = NULL;
      q->direita = NULL;
      q->data = valor;
      
      if (!p){
         cout<<"Success insertion on root"<<endl;
	 return q;
      }

      if (valor <= p->data) p->esquerda = q;
      else p->direita = q;
      cout<<"Sucess insertion on sub-root"<<endl;
      return q;
   }

   if (valor <= q->data) return Inserir(q, q->esquerda, valor);
   else return Inserir(q, q->direita, valor);
   // Chamada recursiva!
}

void Listar(struct Node *p, int level){
   int i;
   if (p == NULL){
      return;
   }
   Listar(p->direita, level+1);
   for(i = 0; i<level; i++) cout<< "-";
   cout<< p->data <<endl;
   Listar (p->esquerda, level +1); 
   return;
}  

struct Node *Remover(struct Node *p, int valor){
   struct Node *p1, *p2;
   if (!p){
      cout<<"Element not found!\a"<<endl;
      return p;
   }
   if (p->data == valor){
      if (p->esquerda == NULL && p->direita == NULL){
         delete p;
	 cout<<"Remove element with success"<<endl;
	 return NULL;
      }

      if (p->esquerda == NULL){
         p1 = p->direita;
	 delete p;
	 cout<<"Remove E element with success"<<endl;
	 return p1;
      }

      if (p->direita == NULL){
         p1 = p->esquerda;
	 delete p;
	 cout<<"Remove L element with success"<<endl;
	 return p1;
      }
      
      p2 = p->direita;
      p1 = p->direita;
      while (p->esquerda) p1 = p1->esquerda;
      p1->esquerda = p->esquerda;
      delete p;
      cout<<"Remove element with success!"<<endl;
      return p2;
   }
   if (p->data < valor) p->direita = Remover(p->direita, valor);
   else p->esquerda = Remover(p->esquerda, valor);
   return p;
}
