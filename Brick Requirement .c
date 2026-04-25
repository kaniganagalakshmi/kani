#include <stdio.h>
int main() {
    float l, h, t, wall_vol;
    float brick_l = 0.20, brick_h = 0.10, brick_t = 0.10;
    int num_bricks;
    printf("Enter Wall Dimensions (Length, Height, Thickness) in meters: ");
    scanf("%f %f %f", &l, &h, &t);
    wall_vol = l * h * t;
    num_bricks = wall_vol / (brick_l * brick_h * brick_t);
    printf("\nTotal Bricks Required: %d\n", num_bricks);
    printf("Note: Add 5%%-10%% extra for wastage on site.\n");
    return 0;
}
