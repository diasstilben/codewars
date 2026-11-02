#------------------------------------------------------------------------------------------------------

#Se listarmos todos os números naturais menores que 10 que são múltiplos de 3 ou 5, obtemos 3, 5, 6 e 9. A soma desses múltiplos é 23.Complete a solução de forma que ela retorne a soma de todos os múltiplos de 3 ou 5 abaixo do número fornecido. Além disso, se o número for negativo, retorne 0. Nota: Se um número for múltiplo de 3 e de 5, conte-o apenas uma vez .

#-----------------------------------------------------------------------------------------------------

# Logica : Crie uma variavel inteira que não aceite números negativos como entrada, depois percorra do número escolhido até o 1, guardando os números que o resto da divisão por 3 ou 5 seja 0...

def solution(number):
    if number < 0:
        return 0

    soma = 0
    for i in range(number):
        if i % 3 == 0 or i % 5 == 0:
            soma += i

    return soma
    

