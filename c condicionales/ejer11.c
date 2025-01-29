#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sueldo;

    printf("Ingresa tu sueldo: ");
    scanf("%d", &sueldo);  // Se lee el valor del sueldo

    if (sueldo >= 3000)
    {
        printf("Tienes que pagar impuestos ");
    }
    else
    {
        printf("No tienes que pagar impuestos ");
    }

    return 0;
}