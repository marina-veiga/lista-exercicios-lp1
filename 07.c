#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

void duplicados(int v[],int tam);
void preencher_vetor(int v[], int tam);
void mostrar_vetor(int v[],int tam);
void ordenar_vetor(int v[],int tam);

int main(){
    srand(time(NULL)); 
    int n=10;

    int vetor[n];
    preencher_vetor(vetor,n);
    mostrar_vetor(vetor,n);
    ordenar_vetor(vetor,n);
    duplicados(vetor,n);

    return 0;
}

void preencher_vetor(int v[],int tam){
    for(int i =0;i< tam;i++){
        v[i]=rand()%10;
    }
}

void mostrar_vetor(int v[],int tam){
    for(int i = 0; i< tam; i++){
        printf("%d ",v[i]);
    }
}

void ordenar_vetor(int v[],int tam){
    int aux;
    for(int i =0; i< tam; i++){
        for (int j= i+1; j< tam; j++){
            if(v[j]<v[i]){
                aux=v[j];
                v[j]= v[i];
                v[i]= aux;
            }
        }
    }
}

void duplicados(int v[],int tam){
    int count =0; 
    int i =0; 

    while(i< tam){
        int j= i+1; 
        while(j< tam && v[i]==v[j]){
            j++;
        }
        if (j> i+1){
            count+=1;
        }
        i=j;
    }

    if (count!=0){
        printf("\nnesse vetor existem %d elementos duplicados",count);
    }
    else{
        printf("\nnesse vetor nao existem elementos duplicados");
    }
}