#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int vetor[10];
    int x, y, atual;

    // Gerando valor aleatório para o vetor

    for (int i = 0; i < 10; i++){
        vetor[i] = (rand() % 10000);
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Organizando vetor com Insertion Sort

    for (x = 1; x < 10; x++){
        atual = vetor[x];
        y = x-1;

        while (y >= 0 && atual<vetor[y]){
            vetor[y+1] = vetor[y];
            y = y-1;
        }
        vetor[y+1] = atual;
    }

    // Imprimindo o vetor

    for (int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}