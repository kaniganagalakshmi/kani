#include <iostream>
class HydraulicPipe {
public:
    double diameter; 
    double velocity;
    double calculateFlowRate() {
        double radius = diameter / 2.0;
        double area = 3.14159 * radius * radius;
        return area * velocity;
    }
};
int main() {
    HydraulicPipe pipe1;
    pipe1.diameter = 0.5;
    pipe1.velocity = 2.5; 
    std::cout << "Flow Rate (Q): " << pipe1.calculateFlowRate() << " m^3/s" << std::endl;
    return 0;
}
