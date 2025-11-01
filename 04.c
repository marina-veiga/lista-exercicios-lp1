#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

void mostrar_vetor(int v[],int tam);
void ordem_crescente(int v[],int tam);

int main(){
    srand(time(NULL));
    int n; 
    printf("informe o tamanho do vetor: "); 
    scanf("%d", &n);

    int vetor[n];
    for(int i = 0; i< n; i++){
        vetor[i]= rand()%10; 
    }

    mostrar_vetor(vetor,n);
    ordem_crescente(vetor,n);
    return 0;
}

void mostrar_vetor(int v[],int tam){
    printf("vetor original: ");
    for(int i = 0; i< tam; i++){ 
        printf("%d ",v[i]);
    }
}

void ordem_crescente(int v[],int tam){
    int temp; 
    printf("\nvetor ordenado: ");
    for(int i =0; i< tam; i++){
        for( int j =i+1; j< tam; j++){
            if(v[j]<v[i]){
                temp= v[j]; 
                v[j]= v[i];
                v[i]= temp;
            }
        }
    }
    for (int i =0; i< tam; i++){
        printf("%d ",v[i]);
    }
}
