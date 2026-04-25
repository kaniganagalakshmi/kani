#include <iostream>
using namespace std;

int main() {
    try {
        int age = 15;
        if (age < 18) {
            throw 505; 
        }
    } catch (int num) {
        cout << "Access denied - You must be at least 18 years old.\n";
        cout << "Error number: " << num << endl;
    }
    return 0;
}
