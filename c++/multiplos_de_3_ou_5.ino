//Se listarmos todos os números naturais menores que 10 que são múltiplos de 3 ou 5, obtemos 3, 5, 6 e 9. A soma desses múltiplos é 23.
//Complete a solução de forma que ela retorne a soma de todos os múltiplos de 3 ou 5 abaixo do número fornecido.
//Além disso, se o número for negativo, retorne 0.
//Nota: Se um número for múltiplo de 3 e de 5, conte-o apenas uma vez .
//Cortesia de projecteuler.net ( Problema 1 )

int solution(int number) 
{
    if(number == 0){
        return 0;
    }

    int soma = 0;

    for(int i = 0; i < number; i++){
        if((i % 3 == 0) || (i % 5 == 0)){
            soma += i; 
        }
    }
    return soma;
}