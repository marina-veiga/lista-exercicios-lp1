#include <stdio.h>

void criptografar (char termo[],int chave);
void descriptografar (char termo[],int chave);
void mostrar_palavra(char termo[]);

int main(){
    char palavra[100]={};
    int deslocamento;
    printf("digite a palavra para criptografar: "); 
    scanf("%s",palavra);
    printf("informe a chave: ");
    scanf("%d",&deslocamento);

    mostrar_palavra(palavra);
    criptografar (palavra,deslocamento);
    printf("\n");

    char palavra2[100]={};
    printf("\ndigite a palavra descriptografar: "); 
    scanf("%s",palavra2);
    mostrar_palavra(palavra2);
    descriptografar (palavra2,deslocamento);
}

void mostrar_palavra(char termo[]){
    printf("a palavra informada foi: ");
    for(int i =0; termo[i]!='\0';i++){
        printf("%c",termo[i]);
    }
}

void criptografar (char termo[],int chave){
    printf("\npalavra criptografada:");
    for (int i = 0; termo[i]!='\0'; i++){
        char cripto = termo[i];
        if(cripto >= 'A' && cripto <= 'Z'){
            cripto = (cripto- 'A')+chave%26;
            cripto= cripto + 'A';
        }
        else if(cripto >= 'a' && cripto <= 'z'){
            cripto = (cripto-'a')+chave%26;
            cripto= cripto + 'a';
        }
        
        printf("%c", cripto);
    }
}

void descriptografar (char termo[],int chave){
    printf("\npalavra descriptografada: ");
    for(int i = 0; termo[i]!= '\0'; i++){
        char cripto = termo[i];
        if(cripto >='A' && cripto <= 'Z'){
            cripto = ((cripto - 'A') - chave + 26) % 26; 
            cripto= cripto + 'A';
        }else if(cripto >= 'a' && cripto <= 'z'){
            cripto = ((cripto - 'a') - chave + 26) % 26;
            cripto= cripto + 'a';
        }
        printf("%c",cripto);
    }
}