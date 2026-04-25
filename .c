#include <stdio.h>
int main() {
    float c, phi, gamma, Df, B, Nc, Nq, Ng, FOS, qu, qs;
    printf("Enter Cohesion (c), Friction Angle (phi), Unit Weight (gamma): ");
    scanf("%f %f %f", &c, &phi, &gamma);
    printf("Enter Depth (Df), Width (B), and Factor of Safety (FOS): ");
    scanf("%f %f %f", &Df, &B, &FOS);
    Nc = 5.7; Nq = 1.0; Ng = 0.0;
    qu = (c * Nc) + (gamma * Df * Nq) + (0.5 * gamma * B * Ng);
    qs = qu / FOS;
    printf("\nUltimate Bearing Capacity: %.2f kN/m2", qu);
    printf("\nSafe Bearing Capacity: %.2f kN/m2\n", qs);
    return 0;
}
