#include <stdio.h>
#include "libproyecto.h"

int main() {
    struct Presupuesto p;

    calcular_presupuesto(6, 5, 2000, 500, 300, 10, &p);

    printf("Total: %.2f\n", p.totalPresupuesto);

    return 0;
}
