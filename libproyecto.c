#include "libproyecto.h"


double calcular_presupuesto(int duracion_meses, int tamano_equipo,
                         double salario_promedio, double infraestructura,
                         double licencias, double contingencia_porcentaje) {

                        double costo_salarios =
                                duracion_meses * tamano_equipo * salario_promedio;


                        double costo_infraestructura =
                                duracion_meses * infraestructura;


                        double costo_licencias =
                                duracion_meses * licencias;


                        double subtotal =
                                costo_salarios + costo_infraestructura + costo_licencias;


                        double contingencia = subtotal * (contingencia_porcentaje / 100.0);


                        double resultado = subtotal + contingencia;


                        return resultado;
}
