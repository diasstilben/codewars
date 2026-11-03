#include <iostream>

int main() {
    int N;
    std::cin >> N;
    
    int anos = N / 365; 
    int meses = (N % 365) / 30; 
    int dias = (N % 365) % 30; 
    
    std::cout << anos << " ano(s)\n";
    std::cout << meses << " mes(es)\n";
    std::cout << dias << " dia(s)\n";
    
    return 0;
}