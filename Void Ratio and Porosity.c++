#include <iostream>
void calculateSoilProperties(double volume_voids, double total_volume) {
    double volume_solids = total_volume - volume_voids;
    double void_ratio = volume_voids / volume_solids;
    double porosity = (volume_voids / total_volume) * 100;
    std::cout << "Void Ratio (e): " << void_ratio << std::endl;
    std::cout << "Porosity (n): " << porosity << "%" << std::endl;
}
int main() {
    calculateSoilProperties(0.4, 1.0); // Sample volumes in m^3
    return 0;
}
