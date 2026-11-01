//As regras do jogo "Pedra, Papel, Tesoura" são:

//Pedra vence Tesoura.
//Tesoura vence papel.
//Papel vence pedra,
//Duas jogadas idênticas resultam em empate.
//Vamos jogar! Você receberá jogadas válidas de dois jogadores de Pedra, Papel e Tesoura e deverá indicar qual jogador venceu: "Player 1 won!"para o jogador 1 e "Player 2 won!"para o jogador 2. Em caso de empate, retorne Draw!.

#include <string>

std::string rps(const std::string& p1, const std::string& p2)
{
    if (p1 == p2) {
        return "Draw!";
    }
    
    if ((p1 == "rock" && p2 == "scissors") ||
        (p1 == "scissors" && p2 == "paper") ||
        (p1 == "paper" && p2 == "rock")) {
        return "Player 1 won!";
    }
    
    return "Player 2 won!";
}