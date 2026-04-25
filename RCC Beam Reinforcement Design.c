#include <stdio.h>
#include <math.h>
int main() {
    float fck, fy, b, d, Mu;
    float Ast, Mu_limit, x_max_d, xu_max;
    printf("--- RCC Singly Reinforced Beam Design (IS 456:2000) ---\n");
    printf("Enter Grade of Concrete (fck in N/mm2): ");
    scanf("%f", &fck);
    printf("Enter Grade of Steel (fy in N/mm2): ");
    scanf("%f", &fy);
    printf("Enter Width of Beam (b in mm): ");
    scanf("%f", &b);
    printf("Enter Effective Depth (d in mm): ");
    scanf("%f", &d);
    printf("Enter Factored Bending Moment (Mu in kNm): ");
    scanf("%f", &Mu);
    float Mu_nm = Mu * 1e6;
    if (fy == 250) x_max_d = 0.53;
    else if (fy == 415) x_max_d = 0.48;
    else if (fy == 500) x_max_d = 0.46;
    else x_max_d = 0.44; // Fe 550
    Mu_limit = 0.36 * fck * b * (x_max_d * d) * (d - 0.42 * (x_max_d * d));
    if (Mu_nm > Mu_limit) {
        printf("\nResult: Section is Over-Reinforced! Increase depth or design as Doubly Reinforced.\n");
    } else {
        Ast = (0.5 * fck / fy) * (1 - sqrt(1 - (4.6 * Mu_nm) / (fck * b * d * d))) * b * d;
        printf("\n--- Design Output ---\n");
        printf("Limiting Moment Capacity: %.2f kNm\n", Mu_limit / 1e6);
        printf("Required Area of Steel (Ast): %.2f mm2\n", Ast);
    }
    return 0;
}
