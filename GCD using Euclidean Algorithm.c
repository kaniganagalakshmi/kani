#include <stdio.h>

int findGCD(int a, int b) {
    if (b == 0) return a;
    return findGCD(b, a % b); 
}

int main() {
    printf("GCD of 48 and 18 is: %d\n", findGCD(48, 18)); 
    return 0;
}
