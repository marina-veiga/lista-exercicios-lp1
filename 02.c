#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

void mostrar_vetor(int v[],int tam);
void ordenar_vetor(int v[],int tam);
void mesclar_vetores(int v1[],int v2[],int v3[],int tam);

int main(){
    srand(time(NULL));
    int n;
    printf("qual o tamanho do vetor: ");
    scanf("%d",&n);

    int vetor1[n];
    int vetor2[n];
    int vetor3[n*2];

    for(int i =0; i<n ;i++){
        vetor1[i]=rand()%10;
        vetor2[i]=rand()%10;
    }

    printf("vetor 1: ");
    mostrar_vetor(vetor1,n);
    printf("vetor 2: ");
    mostrar_vetor(vetor2,n);

    printf("vetor 1 ordenado: ");
    ordenar_vetor(vetor1,n);
    printf("vetor 2 ordenado: "); 
    ordenar_vetor(vetor2,n);

    int tam_vet3= sizeof(vetor3)/sizeof(vetor3[0]);
    printf("vetor 3: ");
    mesclar_vetores(vetor1,vetor2,vetor3,tam_vet3);

    return 0;
}

void mostrar_vetor(int v[], int tam){
    for (int i =0; i< tam; i++){
        printf("%d ",v[i]);
    }
    printf("\n");
}

void ordenar_vetor(int v[],int tam){
    int temp; 
    for (int i= 0; i<tam;i++){
        for(int j = i+1; j< tam; j++){
            if(v[j]<v[i]){
                temp= v[j];
                v[j]= v[i];
                v[i]=temp;
            }
        }
    }
    mostrar_vetor(v,tam);
    printf("\n");
}

void mesclar_vetores(int v1[],int v2[],int v3[],int tam){
    for (int i=0,j=0,k=0; i<tam;i++){
        if (v1[j]<v2[k]){
            v3[i]=v1[j];
            j++;
        }else{
            v3[i]=v2[k];
            k++;
        }
    }
    mostrar_vetor(v3,tam);
}


