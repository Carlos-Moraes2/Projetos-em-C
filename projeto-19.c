#include <stdio.h>
float calcular (){
    float num;
    printf("\n Digite um numero: ");
    scanf("%f", &num);
    return num * num;
}

int main()
{
    float resultado = 0;
    resultado = calcular();
    printf("\nO quadrado do numero digitado é %.2f ", resultado);
    return 0;
}
