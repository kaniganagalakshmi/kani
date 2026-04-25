#include <stdio.h>
int main() {
    float w1, w2, absorption;
    printf("--- Water Absorption Test for Bricks (IS 3495) ---\n");
    printf("Enter weight of dry brick (W1) in grams: ");
    scanf("%f", &w1);
    printf("Enter weight of wet brick (W2) in grams: ");
    scanf("%f", &w2);
    if (w1 <= 0) {
        printf("Error: Dry weight must be greater than zero.\n");
    } else {
        absorption = ((w2 - w1) / w1) * 100;
        printf("\n--- Test Results ---\n");
        printf("Water Absorbed: %.2f grams\n", w2 - w1);
        printf("Percentage Absorption: %.2f%%\n", absorption);
        if (absorption <= 20.0) {
            printf("Result: PASS (Suitable for heavy construction)\n");
        } else if (absorption <= 25.0) {
            printf("Result: ACCEPTABLE (For ordinary construction)\n");
        } else {
            printf("Result: REJECT (High porosity, potential durability issues)\n");
        }
    }
    return 0;
}
