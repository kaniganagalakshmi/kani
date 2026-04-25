#include <stdio.h>
int main() {
    float volume, dry_volume;
    float cement, sand, aggregate, total_parts;
    float r_cement, r_sand, r_aggregate;
    printf("--- Concrete Material Estimator ---\n");
    printf("Enter Wet Volume of Concrete (m3): ");
    scanf("%f", &volume);
    dry_volume = volume * 1.54;
    printf("Enter Ratio (Cement:Sand:Aggregate) - e.g., 1 1.5 3: ");
    scanf("%f %f %f", &r_cement, &r_sand, &r_aggregate);
    total_parts = r_cement + r_sand + r_aggregate;
    cement = (r_cement / total_parts) * dry_volume;
    sand = (r_sand / total_parts) * dry_volume;
    aggregate = (r_aggregate / total_parts) * dry_volume;
    printf("\n--- Material Requirements ---\n");
    printf("Cement: %.2f m3 (~%.0f bags)\n", cement, cement / 0.035);
    printf("Sand: %.2f m3\n", sand);
    printf("Aggregate: %.2f m3\n", aggregate);
    return 0;
}
