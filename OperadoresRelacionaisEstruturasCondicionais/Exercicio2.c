#include <stdio.h>

int main(){

    float salario;
    const float salariominimo = 1320;

    printf("Digite o seu salario: ");
    scanf("%f", &salario);

    if (salario >= salariominimo)
    {
        printf("Vc ganha um salario minimo ou mais.\n");
    } else {
        printf("Vc ganha menos de um salario minimo.\n");
    }
    return 0;
}