#include <stdio.h>

void contar_palavra(char termos[]);
void mostrar_palavras(char termos[]); 

int main(){
    char palavras[101]={};
    printf("informe a frase: "); 
    scanf("%100[^\n]",palavras);
    mostrar_palavras(palavras);
    contar_palavra(palavras);
    return 0;
}


void mostrar_palavras(char termos[]){
    printf("frase informada: ");
    for(int i=0;termos[i]!='\0'; i++){
        printf("%c",termos[i]);
    }
}

void contar_palavra(char termos[]){
    int contador=1; 

    for (int i =0; termos[i]!='\0';i++){
        if(termos[i]== ' '){
            contador+=1;
        }
    }
    printf("\no numero total de palavras eh %d",contador);
}