//Escreva uma função para dividir uma string de palavras separadas por espaços e convertê-la em um array de palavras. As palavras na entrada serão separadas por exatamente um espaço. A entrada não terá espaços no início ou no final. Uma "palavra" é qualquer sequência contígua de caracteres que não contenha espaços.

#include <vector>
#include <string>

using namespace std;

vector<string> string_to_array(const string& s) {
    vector<string> resultado;
    string palavra = "";

    for (char letra : s) {
        if (letra != ' ') {
            palavra += letra; 
        } else {
            resultado.push_back(palavra); 
            palavra = ""; 
        }
    }
    
    resultado.push_back(palavra);

    return resultado;
}