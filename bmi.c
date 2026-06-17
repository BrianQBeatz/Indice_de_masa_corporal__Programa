//lINK DEL REPOSITORIO: https://github.com/BrianQBeatz/Indice_de_masa_corporal__Programa/blob/main/bmi.c

#include <stdio.h>

int main(void)
{
    float peso,altura,imc;
    do {
        printf("Ingrese el peso en kg: \n");
        scanf("%f", &peso);
        
        if (peso<0) {
            printf("Error. Debe ingresar un dato positivo \n");
            printf("\n");
        }
        
    } while (peso<0);
    
    do {
        printf("Ingrese la altura en metros: \n");
        scanf("%f", &altura);
        
        if (altura<0) {
            printf("Error. Debe ingresar un dato positivo \n");
            printf("\n");
        }
        
    } while (altura<0);
    
    
    imc = peso / (altura*altura);
    
    printf("Su índice de masa corporal es: %.2f \n", imc);
    
    printf("\n");
    
    printf("    Índice    |  Condición \n");
    printf("----------------------------- \n");
    printf("    <18.5     |  Bajo peso \n");
    printf("18.5 a 24.9   |  Normal \n");
    printf(" 25.0 a 29.9  |  Sobrepeso \n");
    printf("     >=30     |  Obesidad \n");

    return 0;
}