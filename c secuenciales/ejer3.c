#include <stdio.h>

int main() {

    float num1, num2, num3, num4;
    float suma, producto;

 
    printf("Introduce el primer número: ");
    scanf("%f", &num1);

    printf("Introduce el segundo número: ");
    scanf("%f", &num2);

    printf("Introduce el tercer número: ");
    scanf("%f", &num3);

    printf("Introduce el cuarto número: ");
    scanf("%f", &num4);

    suma = num1 + num2;


    producto = num3 * num4;


    printf("La suma de los dos primeros números es: %.2f\n", suma);
    printf("El producto del tercer y cuarto número es: %.2f\n", producto);

    return 0;
}
