#Jaden Smith, filho de Will Smith, é a estrela de filmes como Karate Kid (2010) e Depois da Terra (2013). Jaden também é conhecido por algumas de suas filosofias, que ele compartilha no Twitter . Ao escrever no Twitter, ele costuma usar letras maiúsculas em quase todas as palavras. Para simplificar, você também precisará usar letras maiúsculas em todas as palavras; veja como as contrações devem ser escritas no exemplo abaixo.

#Sua tarefa é converter as strings para a forma como seriam escritas por Jaden Smith. As strings são citações reais de Jaden Smith, mas não estão com a capitalização correta, como ele as digitou originalmente.

def to_jaden_case(string):
    return " ".join(word.capitalize() for word in string.split())