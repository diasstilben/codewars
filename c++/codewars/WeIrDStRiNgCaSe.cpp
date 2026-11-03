//Write a function that accepts a string, and returns the same string with all even indexed characters in each word upper cased, and all odd indexed characters in each word lower cased. The indexing just explained is zero based, so the zeroth index is even, therefore that character should be upper cased. Indexing resets for each word. In other words, the first letter of every word is index 0 (even), so it must always be uppercase, etc.

//The passed in string will only consist of alphabetical characters and spaces(' '). Spaces will only be present if there are multiple words. Words will be separated by a single space(' ').

#include <string>
#include <cctype>

std::string to_weird_case(std::string str) {
    std::string resultado(str);
    int contador = 0;

    for (char &c : resultado) {
        if (c == ' ') {
            contador = 0;
        } else {
            if (contador % 2 == 0) {
                c = std::toupper(c);
            } else {
                c = std::tolower(c);
            }
            contador++;
        }
    }

    return resultado;
}