#include <stdio.h>
int main() {
    float C, I, A, Q;
    printf("--- Irrigation Discharge Calculation (Rational Method) ---\n");
    printf("Enter Runoff Coefficient (C): ");
    scanf("%f", &C);
    printf("Enter Rainfall Intensity (I) in mm/hr: ");
    scanf("%f", &I);
    printf("Enter Catchment Area (A) in Hectares: ");
    scanf("%f", &A);
    Q = (C * I * A) / 360.0;
    printf("\nPeak Discharge (Q): %.3f m3/sec\n", Q);
    return 0;
}
