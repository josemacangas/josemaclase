#include <stdio.h>

int main() {
    float num1, num2, num3, num4;
    
 
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);
    
   
    printf("Suma: %.2f\n", num1 + num2 + num3 + num4);
    printf("Promedio: %.2f\n", (num1 + num2 + num3 + num4) / 4);
    
    return 0;
}