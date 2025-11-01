#include <stdio.h>

void mostrar_vetor(int vetor[],int tam);
void ordem_inversa(int v1[], int v2[], int tam); 
void preencher_vetor(int vetor[],int tam);

int main(){
    int n; 
    printf("informe o tamanho do vetor: ");
    scanf("%d",&n); 

    if(n<0 || n>50){
        n=50;
    }
    int vetor1[n]; 

    preencher_vetor(vetor1,n);
    mostrar_vetor(vetor1,n);

    int vetor2[n]; 
    ordem_inversa(vetor1,vetor2,n);
    mostrar_vetor(vetor2,n);

    return 0;

}

void preencher_vetor(int vetor[],int tam){
    printf("informe os elementos do vetor\n");
    for(int i =0;i< tam; i++){
        printf("posicao %d: ",i+1);
        scanf("%d",&vetor[i]);
    }
}

void mostrar_vetor(int vetor[], int tam){
    printf("vetor: ");
    for(int i =0 ; i < tam; i++){
        printf("%d ",vetor[i]);
    }
    printf("\n");
    
}

void ordem_inversa(int v1[], int v2[], int tam){
    for (int i =0; i < tam ; i++){
            v2[i]=v1[tam-i-1];
        
    }
}