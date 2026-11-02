//Sua tarefa é criar duas funções ( maxa e b min, ou maximuma e b minimum, etc., dependendo da linguagem) que recebam uma lista de números inteiros como entrada e retornem o maior e o menor número dessa lista, respectivamente. Cada função deve retornar um número.

#include <vector>
using namespace std;

int min(vector<int> list){
    int mini = list[0];
    for (int i = 0; i < list.size(); i++){
        if(mini > list[i]){
            mini = list[i];
        }
    }
    return mini;
    
}

int max(vector<int> list){
    
    int maxi = list[0];
    for (int i = 0; i < list.size(); i++){
        if(list[i] > maxi){
            maxi = list[i];
        }
    }
    return maxi;
}