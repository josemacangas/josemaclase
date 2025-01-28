#include <stdio.h>

int main() {
    float lado, perimetro;

    
    printf("Introduce el valor del lado del cuadrado: ");
    scanf("%f", &lado);

    perimetro = 4 * lado;

    printf("El perimetro del cuadrado es: %.2f\n", perimetro);

    return 0;
}
