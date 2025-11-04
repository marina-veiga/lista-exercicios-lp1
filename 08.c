#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher_matriz(int linhas, int colunas, int mat[linhas][colunas]);
void mostrar_matriz(int linhas, int colunas, int mat[linhas][colunas]);
void produto_matrizes(int linhas, int colunas,int mat1[linhas], int mat2[colunas]);

int main(){
    srand(time(NULL));
    int l1,c1;
    int l2,c2;

    printf("quantas linhas tem a matriz 1: ");
    scanf("%d",&l1);

    printf("\nquantas colunas tem a matriz 1: ");
    scanf("%d",&c1);

    printf("\nquantas linhas tem a matriz 2: ");
    scanf("%d",&l2);

    printf("\nquantas colunas tem a matriz 2: ");
    scanf("%d",&c2);


    int matriz1[l1][c1];
    int matriz2[l2][c2];


    preencher_matriz(l1,c1,matriz1);
    printf("matriz 1:\n");
    mostrar_matriz(l1,c1,matriz1);


    preencher_matriz(l2,c2,matriz2);
    printf("matriz 2:\n");
    mostrar_matriz(l2,c2,matriz2);

    produto_matrizes(l1,c2,matriz1,matriz2);

    return 0;
}

void preencher_matriz(int linhas, int colunas, int mat[linhas][colunas]){
    for(int i = 0; i< linhas ; i++){
        for(int j = 0; j< colunas ; j++){
            mat[i][j]= rand()%10;
        }
    }
}
void mostrar_matriz(int linhas, int colunas, int mat[linhas][colunas]){
    for(int i = 0; i< linhas ; i++){
        for(int j = 0; j< colunas ; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void produto_matrizes(int linhas, int colunas,int mat1[linhas], int mat2[colunas]){
    printf("produto da matriz 1 com a matriz 2: \n");
    int produto[linhas][colunas];
    for(int i = 0;i< linhas ; i++){
        for(int j =0 ; j< colunas;j++){
            for(int k =0; k< linhas ; k++){
                produto[i][j]+=(mat1[k]*mat2[k]);
            }
        }
    }

    mostrar_matriz(linhas,colunas,produto);
}