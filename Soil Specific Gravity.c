#include <stdio.h>
int main() {
    float w1, w2, w3, w4, gs;
    printf("--- Specific Gravity of Soil (Pycnometer Method) ---\n");
    printf("Weight of empty pycnometer (W1) in g: ");
    scanf("%f", &w1);
    printf("Weight of pycnometer + dry soil (W2) in g: ");
    scanf("%f", &w2);
    printf("Weight of pycnometer + soil + water (W3) in g: ");
    scanf("%f", &w3);
    printf("Weight of pycnometer + water (W4) in g: ");
    scanf("%f", &w4);
    float weight_of_dry_soil = w2 - w1;
    float weight_of_equivalent_water = (w2 - w1) - (w3 - w4);
    if (weight_of_equivalent_water == 0) {
        printf("\nError: Division by zero. Check your input weights.\n");
    } else {
        gs = weight_of_dry_soil / weight_of_equivalent_water;
        printf("\n--- Result ---\n");
        printf("Weight of dry soil: %.2f g\n", weight_of_dry_soil);
        printf("Specific Gravity (Gs): %.3f\n", gs);
        if (gs >= 2.6 && gs <= 2.8) {
            printf("Observation: Normal range for inorganic soils.\n");
        } else if (gs < 2.0) {
            printf("Observation: Likely organic soil or peat.\n");
        }
    }
    return 0;
}
