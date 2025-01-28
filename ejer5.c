#include <stdio.h>

int main() {
    float precio;
    int cantidad;

    // Ingreso de datos
    printf("Precio del artículo: ");
    scanf("%f", &precio);
    printf("Cantidad: ");
    scanf("%d", &cantidad);

    // Mostrar total
    printf("Total a abonar: %.2f\n", precio * cantidad);

    return 0;
}
