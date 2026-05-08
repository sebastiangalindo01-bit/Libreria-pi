#include <stdio.h>
#include <string.h>

#define MAX_NOMBRE 120

struct Presupuesto {
    double costoPersonal;
    double costoInfraestructura;
    double costoLicencias;
    double subtotal;
    double contingenciaMonto;
    double totalPresupuesto;
};

void calcular_presupuesto(int duracion_meses, int tamano_equipo, 
                         double salario_promedio, double infraestructura,
                         double licencias, double contingencia_porcentaje,
                         struct Presupuesto *presupuesto) {
    
    presupuesto->costoPersonal = (double)duracion_meses * (double)tamano_equipo * salario_promedio;
    presupuesto->costoInfraestructura = (double)duracion_meses * infraestructura;
    presupuesto->costoLicencias = (double)duracion_meses * licencias;

    presupuesto->subtotal = presupuesto->costoPersonal + 
                            presupuesto->costoInfraestructura + 
                            presupuesto->costoLicencias;

    presupuesto->contingenciaMonto = presupuesto->subtotal * (contingencia_porcentaje / 100.0);
    presupuesto->totalPresupuesto = presupuesto->subtotal + presupuesto->contingenciaMonto;
}
/*
int main(void) {
    char nombreProyecto[MAX_NOMBRE];
    int duracionMeses;
    int tamanoEquipo;
    double salarioPromedioMensual;
    double infraestructuraMensual;
    double licenciasMensuales;
    double contingenciaPorcentaje;
    struct Presupuesto presupuesto;

    printf("= Estimacion de Presupuestos =\n\n");

    printf("Nombre del proyecto: ");
    fgets(nombreProyecto, sizeof(nombreProyecto), stdin);
    nombreProyecto[strcspn(nombreProyecto, "\n")] = '\0';

    printf("Duracion (meses): ");
    scanf("%d", &duracionMeses);

    printf("Tamano del equipo: ");
    scanf("%d", &tamanoEquipo);

    printf("Salario promedio mensual ($): ");
    scanf("%lf", &salarioPromedioMensual);

    printf("Infraestructura mensual ($): ");
    scanf("%lf", &infraestructuraMensual);

    printf("Licencias mensuales ($): ");
    scanf("%lf", &licenciasMensuales);

    printf("Contingencia (%%): ");
    scanf("%lf", &contingenciaPorcentaje);

    calcular_presupuesto(duracionMeses, tamanoEquipo, salarioPromedioMensual,
                         infraestructuraMensual, licenciasMensuales,
                         contingenciaPorcentaje, &presupuesto);

    printf("\nTOTAL PRESUPUESTO: $%.2f\n", presupuesto.totalPresupuesto);

    return 0;
}
*/
