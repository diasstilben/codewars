#include <iostream>
#include <iomanip> 

int main(){
    double raio;
    double n = 3.14159;
    
    std::cin >> raio;
    
    double area = n * (raio * raio);
    
    std::cout << "A=" << std::fixed << std::setprecision(4) << area << std::endl;

    return 0;
}