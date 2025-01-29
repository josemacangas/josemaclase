#include <stdio.h>
int main(void)
{
    float vuelta;
    int moneda5, moneda10, moneda20, moneda50;

    printf("Introduce la cantidad: ");
    scanf("%f", &vuelta);

    // Inicializar las variables
    moneda5 = 0;
    moneda10 = 0;
    moneda20 = 0;
    moneda50 = 0;

    // Devolver monedas de 50 céntimos
    while (vuelta >= 0.50) {
        vuelta -= 0.50;  // Resta de 0.50 euros
        moneda50++;      // Incrementa el contador de monedas de 50 céntimos
    }

    // Devolver monedas de 20 céntimos
    while (vuelta >= 0.20) {
        vuelta -= 0.20;  // Resta de 0.20 euros
        moneda20++;      // Incrementa el contador de monedas de 20 céntimos
    }

    // Devolver monedas de 10 céntimos
    while (vuelta >= 0.10) {
        vuelta -= 0.10;  // Resta de 0.10 euros
        moneda10++;      // Incrementa el contador de monedas de 10 céntimos
    }

    // Devolver monedas de 5 céntimos
    while (vuelta >= 0.05) {
        vuelta -= 0.05;  // Resta de 0.05 euros
        moneda5++;       // Incrementa el contador de monedas de 5 céntimos
    }

    // Mostrar el resultado
    printf("Devuelve %d monedas de 0.50, %d monedas de 0.20, %d monedas de 0.10 y %d monedas de 0.05 euros\n",
           moneda50, moneda20, moneda10, moneda5);

    return 0;
}
