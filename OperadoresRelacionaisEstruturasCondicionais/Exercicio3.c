#include<stdio.h>

int main(){
    double altura;

    printf("Digite sua altura em metros: ");
    scanf("%lf", &altura);

    if (altura >= 1.8)
    {
        printf("Vc eh privilegiado.\n");
    } else {
        printf("Vc eh da turma da xuxa, rei dos baixinhos.\n");
    }
        
    return 0;
}