#include <stdio.h>

int main(void)
{
    float peso,altura,imc;
    
    printf("Ingrese el peso en kg: ");
    scanf("%f", &peso);
    printf("Ingrese la altura en metros: ");
    scanf("%f", &altura);
    imc = peso / (altura*altura);
    
    printf("Su índice de masa corporal es: %.2f \n", imc);
    
    printf("\n");
    
    printf("    Índice    |  Condición \n");
    printf("----------------------------- \n");
    printf("    <18.5     |  Bajo peso \n");
    printf("18.5 a 24.9   |  Normal \n");
    printf(" 25.0 a 29.9  |  Sobrepeso \n");
    printf("     >=30     |  Obesidad \n");
    
    printf("\n");

    if (imc >= 30)
        printf("Usted posee la Condición: Obesidad");
    else if (imc <= 29.9 && imc >= 25)
            printf("Usted posee la Condición: Sobrepeso");
        else if (imc <= 24.9 && imc >= 18.5)
                printf("Usted posee la Condición: Normal");
            else if (imc < 18.5)
                    printf("Usted posee la Condición: Bajo peso");


    return 0;
}