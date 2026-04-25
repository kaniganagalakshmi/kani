#include <stdio.h>
int main() {
    float length, height, thickness, wallVolume;
    float brickL = 0.19, brickH = 0.09, brickW = 0.09; 
    float brickVolume, numBricks;
    printf("Enter Wall Length (m): ");
    scanf("%f", &length);
    printf("Enter Wall Height (m): ");
    scanf("%f", &height);
    printf("Enter Wall Thickness (m): ");
    scanf("%f", &thickness);
    wallVolume = length * height * thickness;
    brickVolume = brickL * brickH * brickW;
    numBricks = wallVolume / brickVolume;
    printf("\nTotal Wall Volume: %.2f cubic meters", wallVolume);
    printf("\nEstimated Bricks Required: %.0f\n", numBricks);
    return 0;
}
