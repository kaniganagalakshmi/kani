#include <stdio.h>
int main() {
    float load, side, area, strength;
    printf("--- Concrete Cube Strength Test ---\n");
    printf("Enter Side of Cube (mm) [Standard is 150]: ");
    scanf("%f", &side);
    printf("Enter Maximum Failure Load (kN): ");
    scanf("%f", &load);
    area = side * side;
    strength = (load * 1000) / area;
    printf("\nCompressive Strength: %.2f N/mm2\n", strength);
    if (strength >= 20.0) {
        printf("Result: Meets M20 Grade standards.\n");
    } else {
        printf("Result: Fails M20 Grade standards.\n");
    }
    return 0;
}
