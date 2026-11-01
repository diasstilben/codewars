//Houve uma prova na sua aula e você passou. Parabéns!

//Mas você é uma pessoa ambiciosa. Você quer saber se é melhor do que o aluno médio da sua turma.

//Você receberá uma lista com as notas dos seus colegas. Agora, calcule a média e compare com a sua nota!

//Volte true se você estiver melhor, caso contrário false!

//Observação:
//Seus pontos não estão incluídos na soma dos pontos da sua turma. Não se esqueça deles ao calcular a média!

#include <vector>

bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
    int totalclass = 0;
    for(int i = 0; i < classPoints.size(); i++){
    totalclass += classPoints[i];
  } 
    int media = totalclass / classPoints.size();
    if(media > yourPoints){
        return false;
    } 
    else{
        return true;
    }
}