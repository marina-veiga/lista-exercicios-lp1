#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tamanho 5

void mult_diagonal(int mat[5][5], int tam); 
void mostrar_matriz(int mat[5][5], int tam); 
void preencher_matriz(int mat[5][5], int tam);

int main(){
    srand(time(NULL));
    int matriz[5][5];

    preencher_matriz(matriz,tamanho);
    mostrar_matriz(matriz,tamanho);
    mult_diagonal(matriz,tamanho);

    return 0;
}

void preencher_matriz(int mat[5][5], int tam){
    for(int i =0; i< tam; i++){
        for(int j =0; j< tam; j++){
            mat[i][j]= rand()%10;
        }
    }
}

void mostrar_matriz(int mat[5][5], int tam){
    printf("Matriz:\n");
    for(int i =0; i< tam; i++){
        for(int j =0; j< tam; j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void mult_diagonal(int mat[5][5], int tam){
    int mult=1;
    for(int i =0; i< tam; i++){
        for(int j =0; j< tam; j++){
            if(mat[i]==mat[j]){
                mult*=mat[i][j];
            }
        }
    }
    printf("a multiplicacao da diagonal principal dessa matriz eh: %d", mult);
}