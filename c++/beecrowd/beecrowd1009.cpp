#include <iostream>
#include <string>
#include <iomanip>

int main(){
    
    std::string nome;
    double salariofix;
    double vendas;
    double salariototal;
    std::cin >> nome;
    std::cin >> salariofix >> vendas;
    salariototal = salariofix + (0.15 * vendas);
    std::cout << "TOTAL = R$ " << std::fixed << std::setprecision(2) << salariototal << std::endl;

    return 0;
}