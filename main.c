#include <stdio.h>
#include "libproyecto.h"

int main(void) {
    int duracion_meses;
    int tamano_equipo;
    double salario_promedio_mensual;
    double infraestructura_mensual;
    double licencias_mensuales;
    double contingencia_porcentaje;
    double resultado;

    printf("Estimacion de Presupuestos\n\n");


    printf("Duracion (meses): ");
    scanf("%d", &duracion_meses);

    printf("Tamano del equipo: ");
    scanf("%d", &tamano_equipo);

    printf("Salario promedio mensual ($): ");
    scanf("%lf", &salario_promedio_mensual);

    printf("Infraestructura mensual ($): ");
    scanf("%lf", &infraestructura_mensual);

    printf("Licencias mensuales ($): ");
    scanf("%lf", &licencias_mensuales);

    printf("Contingencia (%%): ");
    scanf("%lf", &contingencia_porcentaje);

    resultado = calcular_presupuesto(duracion_meses, tamano_equipo, salario_promedio_mensual,
                         infraestructura_mensual, licencias_mensuales,
                         contingencia_porcentaje);

    printf("\nTOTAL PRESUPUESTO: $%.2lf\n", resultado);

    return 0;
}
