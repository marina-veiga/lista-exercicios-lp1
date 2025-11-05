#include<stdio.h> 

void contar_caractere(char palavra[]);
void mostrar_caractere(char palavra[]);

int main(){
    char nome[] = "marina";
    mostrar_caractere(nome);
    contar_caractere(nome);
    return 0;
}

void mostrar_caractere(char palavra[]){
    printf("string informada: ");
    for(int i =0 ; palavra[i] != '\0'; i++){
        printf("%c",palavra[i]);
    }
}

void contar_caractere(char palavra []){
    int contador = 0;
    int i=0; 

    while (palavra[i] != '\0'){
        contador+=1;
        i++;
    }
    printf("\no numero de caractere armazenados na string '%s' eh: %d", palavra,contador );
}