#include <stdio.h>
#include <math.h>
#define FY_SAFETY_FACTOR 1.15
#define FCK_SAFETY_FACTOR 1.5
void calculate_ast(float mu, float fck, float fy, float b, float d) {
    float ast = (0.5 * fck / fy) * (1 - sqrt(1 - (4.6 * mu * 1e6) / (fck * b * d * d))) * b * d;
    printf("Required Ast: %.2f mm2\n", ast);
}
int main() {
    calculate_ast(150.0, 20.0, 415.0, 230.0, 450.0);
    return 0;
}
