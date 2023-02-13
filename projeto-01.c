#include <stdio.h>

int main(){
    

    char nome [4];
    int ano;
    
    printf("\n Digite seu nome: ");
    scanf("%s", nome);
    
    printf("\n Digite o ano de nascimento:");
    scanf("%d", &ano);
    
    printf("\n Nome digitado: %s \n", nome);
    printf("\n Ano de nascimento: %d \n", ano);
    
    return 0;
}