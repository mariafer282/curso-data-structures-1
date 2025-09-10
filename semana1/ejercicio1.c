
//Determine las raíces de una ecuación de 2º grado: ax² + bx + c = 0 (recordar que el discriminante Δ = b² – 4ac, y que la raíz r = (–b ± √Δ)/2a).
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminante, r1, r2;

    printf("Ingrese los coeficientes a, b y c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminante = b * b - 4 * a * c;

    if (discriminante > 0) {
        r1 = (-b + sqrt(discriminante)) / (2 * a);
        r2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("Dos raíces reales: %.2f y %.2f\n", r1, r2);
    } else if (discriminante == 0) {
        r1 = -b / (2 * a);
        printf("Una raíz real doble: %.2f\n", r1);
    } else {
        printf("La ecuación no tiene raíces reales.\n");
    }

    return 0;
}
