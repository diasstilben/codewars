//Considere um array/lista de ovelhas onde algumas ovelhas podem estar faltando em seus lugares. Precisamos de uma função que conte o número de ovelhas presentes no array (verdadeiro significa presente).



#include <vector>

using namespace std; 

int count_sheep(vector<bool> arr) 
{
  int total = 0; 
  
  for (bool ovelha : arr) 
  {
    if (ovelha) 
    { 
      total++;    
    }
  }
  
  return total;
}