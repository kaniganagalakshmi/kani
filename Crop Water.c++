#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Crop {
public:
    string name;
    double area;       // Hectares
    double delta;      // Total depth of water required in meters
    Crop(string n, double a, double d) : name(n), area(a), delta(d) {}
    double calculateVolume() {
        return area * delta;
    }
};
int main() {
    vector<Crop> farmCrops;
    farmCrops.push_back(Crop("Rice", 50.0, 1.2));      
    farmCrops.push_back(Crop("Wheat", 30.0, 0.4));    
    farmCrops.push_back(Crop("Sugarcane", 20.0, 2.5));
    double totalVolume = 0;
    cout << "--- Irrigation Water Requirement Report ---" << endl;
    for (auto &crop : farmCrops) {
        double vol = crop.calculateVolume();
        cout << "Crop: " << crop.name << " | Volume: " << vol << " ha-m" << endl;
        totalVolume += vol;
    }
    cout << "-------------------------------------------" << endl;
    cout << "Total Water Required for Farm: " << totalVolume << " ha-m" << endl;
    return 0;
}
