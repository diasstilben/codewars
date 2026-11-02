#---------------------------------------------------------------------------------------------------

#Given a non-negative integer, 3 for example, return a string with a murmur: "1 sheep...2 sheep...3 sheep...". Input will always be valid, i.e. no negative integers.

#----------------------------------------------------------------------------------------------------

def count_sheep(n):
    resultado = ""    
    for i in range(n):
        resultado += f"{i+1} sheep..."
    return resultado