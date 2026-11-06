#include <stdio.h>
#include <iostream>

int main() {
 
    int A,B,C,D,E;
    std::cin >> A >> B >> C >> D >> E;

    int contador = 0;

    if(A % 2 == 0){
        contador ++;
    }
    if(B % 2  == 0){
        contador ++;
    }
    if(C % 2 == 0){
        contador ++;
    }
    if(D % 2 == 0){
        contador ++;
    }
    if(E % 2 == 0){
        contador ++;
    }

    std::cout << contador <<" valores pares\n";

    return 0;
}