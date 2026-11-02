#include <iostream>
#include <iomanip> 
int main(){
    int A, B;
    float C;    
    std::cin >> A >> B;
    std::cin >> C;    
    float salario = B * C;   
    std::cout << "NUMBER = " << A << "\n";
    std::cout << "SALARY = U$ " << std::fixed << std::setprecision(2) << salario << std::endl;

    return 0;
}