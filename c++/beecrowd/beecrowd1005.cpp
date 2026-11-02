#include <iostream>
#include <iomanip> 
int main(){
    double A,B;
    std::cin >> A >> B;
    double media = ((A * 3.5) + (B * 7.5)) / 11.0;
    std::cout << "MEDIA = " << std::fixed << std::setprecision(5) << media << std::endl;


    return 0;
}
