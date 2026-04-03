#include <stdio.h>

int main(){

    int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
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

}