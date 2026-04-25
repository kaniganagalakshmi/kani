#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class Consolidation {
private:
    double Cc;      
    double eo; 
    double Ho;
    double sigma0;
    double deltaSigma;
public:
    Consolidation(double cc, double e, double h, double s0, double ds) 
        : Cc(cc), eo(e), Ho(h), sigma0(s0), deltaSigma(ds) {}
    double calculateSettlement() {
        double logPart = log10((sigma0 + deltaSigma) / sigma0);
        return (Cc * Ho / (1 + eo)) * logPart;
    }
    void displayReport() {
        double result = calculateSettlement();
        cout << fixed << setprecision(2);
        cout << "\n--- Consolidation Analysis ---" << endl;
        cout << "Initial Clay Thickness: " << Ho << " mm" << endl;
        cout << "Stress Increase Ratio: " << (sigma0 + deltaSigma) / sigma0 << endl;
        cout << "Total Settlement (Sc): " << result << " mm" << endl;
        if (result > 50.0) {
            cout << "Warning: Significant settlement detected (>50mm)." << endl;
        }
    }
};
int main() {
    double cc, e, h, s0, ds;
    cout << "Enter Compression Index (Cc): ";
    cin >> cc;
    cout << "Enter Initial Void Ratio (eo): ";
    cin >> e;
    cout << "Enter Clay Layer Thickness (Ho) in mm: ";
    cin >> h;
    cout << "Enter Initial Effective Stress (sigma0) in kN/m2: ";
    cin >> s0;
    cout << "Enter Stress Increase (deltaSigma) in kN/m2: ";
    cin >> ds;
    Consolidation test(cc, e, h, s0, ds);
    test.displayReport();
    return 0;
}
