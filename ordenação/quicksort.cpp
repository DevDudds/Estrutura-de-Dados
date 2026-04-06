#include <iostream>
using namespace std;

void quicksort(int *item, int esquerda, int direita);

int main(){
    int matriz[10], i;
    cout << endl;
    for (i = 0; i < 10; i++){
        cin >> matriz[i];
    }

    quicksort(matriz, 0, 9);

    cout << endl << "Matriz ordenada: " << endl;

    for (i = 0; i < 10; i++)
        cout << matriz[i] << "\t";
    cout << endl;

    return 0;
}

void quicksort(int *item, int esquerda, int direita){
    int i, j, x, y;
    i = esquerda;
    j = direita;
    x = item[(direita + esquerda)/2];

    do{
        while(item[i] < x && i < direita) i++;
        while(x < item[j] && j > esquerda) j--;

        if(i <= j){
            y = item[i];
            item[i] = item[j];
            item[j] = y;
            i++;
            j--;
        }
    } while(i <= j);

    if(esquerda < j) quicksort(item, esquerda, j);
    if(i < direita) quicksort(item, i, direita);

    return;
}