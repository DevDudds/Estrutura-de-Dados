#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    int vetor[10];
    int lowest, aux, x, y;

    // Atribuindo valores aleatórios ao vetor

    for (int i = 0; i < 10; i++){
        vetor[i] = (rand() % 100);
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Organizando o vetor com o método Selection Sort

    for (x = 0; x < 10; x++){
        lowest = x;
        
        for (y = x+1; y < 10; y++){
            if (vetor[y] < vetor[lowest])
                lowest = y;
        }

        if (lowest != x){
            aux = vetor[x];
            vetor[x] = vetor[lowest];
            vetor[lowest] = aux;
        }
    }

    // Imprimindo o vetor após a organização

    for (int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}