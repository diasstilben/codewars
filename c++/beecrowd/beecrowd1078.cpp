#include <iostream>

int main(){
    
    int N;
    std::cin >> N;

    for(int i = 1; i <= 10; i++){
        int mult = i * N;
        std::cout << i << " x " << N << " = " << mult << "\n";
    }

    return 0;
}