#include <iostream>
#include <iomanip>

int main() {
    double N;
    std::cin >> N;

    int valor = N * 100 + 0.5;

    std::cout << "NOTAS:\n";
    std::cout << valor / 10000 << " nota(s) de R$ 100.00\n";
    valor %= 10000;
    std::cout << valor / 5000 << " nota(s) de R$ 50.00\n";
    valor %= 5000;
    std::cout << valor / 2000 << " nota(s) de R$ 20.00\n";
    valor %= 2000;
    std::cout << valor / 1000 << " nota(s) de R$ 10.00\n";
    valor %= 1000;
    std::cout << valor / 500 << " nota(s) de R$ 5.00\n";
    valor %= 500;
    std::cout << valor / 200 << " nota(s) de R$ 2.00\n";
    valor %= 200;

    std::cout << "MOEDAS:\n";
    std::cout << valor / 100 << " moeda(s) de R$ 1.00\n";
    valor %= 100;
    std::cout << valor / 50 << " moeda(s) de R$ 0.50\n";
    valor %= 50;
    std::cout << valor / 25 << " moeda(s) de R$ 0.25\n";
    valor %= 25;
    std::cout << valor / 10 << " moeda(s) de R$ 0.10\n";
    valor %= 10;
    std::cout << valor / 5 << " moeda(s) de R$ 0.05\n";
    valor %= 5;
    std::cout << valor / 1 << " moeda(s) de R$ 0.01\n";

    return 0;
}