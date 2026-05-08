#ifndef LIB_PRESUPUESTO_H
#define LIB_PRESUPUESTO_H

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
                         struct Presupuesto *presupuesto);

#endif
