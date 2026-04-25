#include <iostream>
#include <iomanip>
using namespace std;
class Beam {
public:
    double length;  
    double E;  
    double I;
    Beam(double l, double e, double i) : length(l), E(e), I(i) {}
    double getRigidity() {
        return E * 1e9 * I;
    }
    double calculateDeflection(double load) {
        double EI = getRigidity();
        return (load * 1000 * length * length * length) / (3 * EI);
    }
};
int main() {
    Beam steelBeam(5.0, 200.0, 0.0005);
    double load;
    cout << "Enter Point Load at tip of Cantilever (kN): ";
    cin >> load;
    double deflection = steelBeam.calculateDeflection(load);
    cout << fixed << setprecision(4);
    cout << "\n--- Structural Analysis ---" << endl;
    cout << "Beam Rigidity (EI): " << steelBeam.getRigidity() << " N-m2" << endl;
    cout << "Max Deflection: " << deflection * 1000 << " mm" << endl;
    return 0;
}
