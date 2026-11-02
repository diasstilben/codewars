//Dado um vetor de números inteiros, sua solução deve encontrar o menor número inteiro.

//Por exemplo:

//Dada [34, 15, 88, 2]a sua solução, retornará2
//Dada [34, -345, -1, 100]a sua solução, retornará-345
//Para efeitos deste kata, pode assumir que o array fornecido não estará vazio.

#include <vector>

using namespace std; 

int findSmallest(vector <int> list)
{
  int menor = list[0];
  for (int i = 0; i < list.size(); i++){
    if(list[i] < menor){
        menor = list[i];
    }
  }  
  return menor; 
}

