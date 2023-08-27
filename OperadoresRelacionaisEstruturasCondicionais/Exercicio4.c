#include <stdio.h>

int main(){
    double peso;

    printf("Digite seu peso em quilogramas: ");
    scanf("%lf", &peso);

    if (peso <=60)
    {
        printf("Vc esta abaixo do peso\n");
    } else {
        printf("VCeh da tropa da thais carla\n");
    }
    
    return 0;
}