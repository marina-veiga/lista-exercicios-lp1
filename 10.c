#include <stdio.h>

void eh_palindromo(char termo[],int qtd); 
void mostrar_palavra(char termo[]);
int contar_caracter(char termo[]); 

int main(){
    char palavra[100]={}; 
    printf("informe a palavra para saber se eh palindromo ou nao: "); 
    scanf("%s",palavra); 

    mostrar_palavra(palavra);
    int quantidade= contar_caracter(palavra);

    eh_palindromo(palavra,quantidade);
    return 0;
}

void mostrar_palavra(char termo[]){
    printf("palavra informada: ");
    for(int i =0; termo[i] != '\0'; i++){
        printf("%c", termo[i]);
    }
}
int contar_caracter(char termo[]){
    int contador=0;
    for(int i =0; termo[i] != 0; i++){
        contador+=1;
    }
    return contador;
}

void eh_palindromo(char termo[],int qtd){
    int metade= qtd/2;
    int esquerda=0;
    int direita= qtd-1; 
    int i=0; 

    int palindromo=1;
    while (i<metade){
        if(termo[esquerda]!=termo[direita]){
            palindromo=0;
        }
        esquerda++;
        direita--;
        i++;
    }

    if(palindromo!=0){
        printf("\n%s eh palindromo",termo);
    }else{
        printf("\n%s nao eh palindromo",termo);
    }
}