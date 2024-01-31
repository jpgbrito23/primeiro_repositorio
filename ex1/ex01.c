#include <stdio.h>

int main()
{
    float n1 , n2 , soma , sub , mult  , div;
   
    printf("Digite um numero: ");
    scanf("%f",&n1);
    printf("Digite outro numero: ");
    scanf("%f",&n2);
    printf("A soma desses numeros : ");
    soma = n1 + n2;
    printf("%f",soma );
    printf("\nA subtracao desses numeros : ");
    sub = n1 - n2;
    printf("%f",sub);
    printf("\nA multiplicacao desses numeros : ");
    mult = n1 * n2;
    printf("%f",mult);
    printf("\nA divisao desses numeros : ");
    div = n1/n2;
    printf("%f",div);
}
