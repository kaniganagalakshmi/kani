#include <iostream>
#include <cmath>
using namespace std;
class Foundation {
public:
    double c, gamma, Df, B, phi;
    double Nc, Nq, Ngamma;
    Foundation(double cohesion, double unit_weight, double depth, double width) 
        : c(cohesion), gamma(unit_weight), Df(depth), B(width) {}
    void setFactors(double nc, double nq, double ng) {
        Nc = nc; Nq = nq; Ngamma = ng;
    }
    double ultimateCapacity(string type) {
        if (type == "strip")
            return (c * Nc) + (gamma * Df * Nq) + (0.5 * gamma * B * Ngamma);
        if (type == "square")
            return (1.3 * c * Nc) + (gamma * Df * Nq) + (0.4 * gamma * B * Ngamma);
        return 0;
    }
};
int main() {
    Foundation footing(20.0, 18.0, 1.5, 2.0);
    footing.setFactors(17.7, 7.4, 5.0);
    cout << "Square Footing Capacity: " << footing.ultimateCapacity("square") << " kN/m2" << endl;
    return 0;
}
