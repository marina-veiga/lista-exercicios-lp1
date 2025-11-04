#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

void delete_value (int v[],int tam, int valor); 
void mostrar_vetor(int v[], int tam);

int main(){
    srand(time(NULL));
    int n =5; 
    int vetor[n];
    for (int i =0; i< n; i++){
        vetor[i]=rand()%10;
    }

    printf("vetor: "); 
    mostrar_vetor(vetor,n);

    int value; 
    printf("entre os valores informados, qual deseja deletar? "); 
    scanf("%d",&value);

    printf("novo vetor com o valor deletado:"); 
    delete_value(vetor,n,value);


    return 0;
}

void mostrar_vetor(int v[],int tam){
    for(int i =0; i< tam; i++){
        printf("%d ",v[i]);
    }
    printf("\n");
}

void delete_value(int v[],int tam, int valor){
    for (int i =0; i< tam; i++){
        if (valor==v[i]){
            for(int j = i; j< tam; j++){
                v[j]=v[j+1];
            }
        tam--;
        i--;
        }
    }

    mostrar_vetor(v,tam);
}