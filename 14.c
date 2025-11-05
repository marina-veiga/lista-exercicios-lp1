#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#define tamanho 3

void acessar_posicao(int linha,int coluna,int v[],int tam);
void diagonal_principal();
void elementos_coluna();
void elementos_linha(); 
void armazenar_mat(int mat[3][3], int v[], int tam,int tam_vetor);
void preencher_mat(int mat[3][3],int tam);
void mostrar_mat(int mat[3][3],int tam);
void mostrar_vet(int vet[],int tam);

int main (){
    srand(time(NULL));
    int matriz[3][3];

    preencher_mat(matriz,tamanho);
    mostrar_mat(matriz,tamanho);

    int tamanho_mat= sizeof(matriz)/sizeof(matriz[0][0]);
    int vetor[tamanho_mat];
    int linha,coluna;
    printf("informe a linha: "); 
    scanf("%d",&linha);
    printf("informe a coluna: "); 
    scanf("%d",&coluna);

   armazenar_mat(matriz,vetor, tamanho,tamanho_mat);
   acessar_posicao(linha,coluna,vetor,tamanho_mat);

}

void preencher_mat(int mat[3][3],int tam){
    for(int i = 0; i< tam ; i++){
        for(int j = 0; j< tam; j++){
            mat[i][j]= rand()%10;
        }
    }
}

void mostrar_mat(int mat[3][3],int tam){
    printf("Matriz:\n");
    for(int i = 0; i< tam ; i++){
        for(int j = 0; j< tam; j++){
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
}

void mostrar_vet(int vet[],int tam){
    for(int i = 0; i < tam; i++){
        printf("%d ",vet[i]);
    }
}

void armazenar_mat(int mat[3][3], int v[],int tam,int tam_vetor){
    printf("vetor:");
    for (int i =0,k=0; i< tam; i++){
        for (int j =0; j< tam ; j++){
            v[k]=mat[i][j];
            k++;
        }
    }
    mostrar_vet(v,tam_vetor);
}

void acessar_posicao(int linha,int coluna,int v[],int tam){
    for(int i = 0; i< tam; i++){
        if(linha ==0){

        }
    }
}