//Exemplo 2 de ordenação de vetores de struct
//Neste criamos nossos proprios critérios de ordenação, utilizando as variáveis da struct
#include <iostream>
#include <algorithm>

using namespace std;

//Criamos nossa struct aluno
struct aluno{
    int matricula;
    string nome;
    float nota;
};
// || OU 
// && AND
bool ordena(const aluno &a1, const aluno &a2){
    return (a1.nota > a2.nota) ||  // PRIMEIRO CRITERIO
           (a1.nota == a2.nota  && a1.nome < a2.nome) ||  // SEGUNDO CRITÉRIO
           (a1.nota == a2.nota  && a1.nome == a2.nome && a1.matricula < a2.matricula); // TERCEIRO CRITÉRIO
}           

const int NA = 5; // numero de alunos
int main(){

    //Declara o vetor do tipo aluno e definimos os seus valores;
    aluno turma[NA] ={
        {909090,"João Carlos",7.16}, //0
        {808080,"Ana Claudia", 8.5}, //1
        {707070,"Rose", 6.1},        //2
        {615150,"Rose", 6.1},       //3
        {505031,"Luís", 6.1}         //4
    };


    sort(turma,turma+NA,ordena); //Ordenação

    //exibimos o vetor
    for(int i=0; i<NA; i++){
        cout << "Matr.: " << turma[i].matricula  << ",  ";
        cout << "Nome: " << turma[i].nome << ", ";
        cout << "Nota: " << turma[i].nota  << ".";
        cout << endl;
    }

    return 0;
}