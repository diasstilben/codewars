#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double x1, y1, x2, y2;
    
    std::cin >> x1 >> y1;
    std::cin >> x2 >> y2;
    
    double distancia = std::sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    
    std::cout << std::fixed << std::setprecision(4) << distancia << "\n";

    return 0;
}