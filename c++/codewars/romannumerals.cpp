//Create a function that takes a Roman numeral as its argument and returns its value as a numeric decimal integer. You don't need to validate the form of the Roman numeral.
//Modern Roman numerals are written by expressing each decimal digit of the number to be encoded separately, starting with the leftmost digit and skipping any 0s. So 1990 is rendered "MCMXC" (1000 = M, 900 = CM, 90 = XC) and 2008 is rendered "MMVIII" (2000 = MM, 8 = VIII). The Roman numeral for 1666, "MDCLXVI", uses each letter in descending order.

#include <iostream>
#include <string>

int valorRomano(char c) {
    if(c == 'M') return 1000;
    if(c == 'D') return 500;
    if(c == 'C') return 100;
    if(c == 'L') return 50;
    if(c == 'X') return 10;
    if(c == 'V') return 5;
    if(c == 'I') return 1;
    return 0;
}

int solution(std::string roman) {
    int valortotal = 0;
  
    for (int i = 0; i < roman.length(); i++) {
        int primeiro = valorRomano(roman[i]);
        int segundo = valorRomano(roman[i + 1]);

        if (primeiro >= segundo) {
            valortotal += primeiro;
        } else {
            valortotal -= primeiro;
        }
    }

    return valortotal;
}