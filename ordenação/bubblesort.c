#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    int v[10];
    int aux = 0;

    printf("Vetor desorganizado: ");

    for (int i = 0; i < 10; i++){
        v[i] = (rand() % 1000);
        printf("%d ",  v[i]);
    }

    printf("\nVetor organizado: ");

    for (int j = 0; j < 10; j++){
        for (int i = 0; i < 9; i++){
            if (v[i] > v[i+1]){
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
            }
        }
    }
    
    for (int i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }
    printf("\n");

    // pesquisa binária

    //int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int inicio = 0, fim = 9, meio = 0, achei = 0;
    int x = 0;

    printf("Digite qual valor você procura: ");
    scanf("%d", &x);

    while (inicio <= fim && achei == 0){
        meio = (inicio + fim) / 2;
        if (v[meio] == x){
            achei = 1;
            printf("O valor está na posição: %d", meio);
        }
        if (x > v[meio]){
            inicio = meio+1;
        }
        else {
            fim = meio-1;
        }
    }

    return 0;
}