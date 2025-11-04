#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#define tamanho 5 


void preencher_matriz(int mat[5][5],int tam);
void mostrar_matriz(int mat[5][5], int tam);
void matriz_transposta(int mat[5][5],int tam);

int main(){
    srand(time(NULL));
    int matriz[5][5];

    preencher_matriz(matriz,tamanho);
    printf("matriz original:\n");
    mostrar_matriz(matriz,tamanho);
    printf("matriz transposta:\n");
    matriz_transposta(matriz,tamanho);

    return 0;
}

void preencher_matriz(int mat[5][5],int tam){
    for(int i =0; i< tam; i++){
        for (int j = 0; j< tam; j++){
            mat[i][j]= rand()%10;
        }
    }
}

void mostrar_matriz (int mat[5][5], int tam){
    for (int i =0; i<tam; i++){
        for(int j =0; j< tam; j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void matriz_transposta (int mat[5][5],int tam){
    int transposta[5][5]; 

    for(int i =0; i< tam; i++){
        for(int j = 0; j< tam; j++){
            transposta[i][j]= mat[j][i];
        }
    }
    mostrar_matriz(transposta,tam);
}