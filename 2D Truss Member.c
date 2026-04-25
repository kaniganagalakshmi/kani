#include <stdio.h>
#include <math.h>
#define PI 3.14159265
int main() {
    double E, A, L, angle, theta;
    double k[4][4];
    double c, s;
    printf("--- 2D Truss Analysis: Member Stiffness Matrix ---\n");
    printf("Enter Modulus of Elasticity (E in N/mm2): ");
    scanf("%lf", &E);
    printf("Enter Area of Cross-section (A in mm2): ");
    scanf("%lf", &A);
    printf("Enter Length of Member (L in mm): ");
    scanf("%lf", &L);
    printf("Enter Angle of Member (degrees): ");
    scanf("%lf", &angle);
    theta = angle * PI / 180.0;
    c = cos(theta);
    s = sin(theta);
    double factor = (E * A) / L;
    k[0][0] = k[2][2] = c * c * factor;
    k[0][1] = k[1][0] = k[2][3] = k[3][2] = c * s * factor;
    k[1][1] = k[3][3] = s * s * factor;
    k[0][2] = k[2][0] = -k[0][0];
    k[0][3] = k[3][0] = -k[0][1];
    k[1][2] = k[2][1] = -k[0][1];
    k[1][3] = k[3][1] = -k[1][1];
    printf("\nGlobal Stiffness Matrix for the Member:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%12.2f ", k[i][j]);
        }
        printf("\n");
    }
    return 0;
}
