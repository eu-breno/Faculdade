//Exemplo 1 de ordenação de vetores de struct
#include <iostream>
#include <algorithm>

using namespace std;

//Criamos nossa struct aluno
struct aluno{
    int matricula;
    string nome;
    float nota;
};

bool ordena(const aluno &a1, const aluno &a2){
    return a1.nome > a2.nome;
}

const int NA = 5; // numero de alunos
int main(){

    //Declara o vetor do tipo aluno e definimos os seus valores;
    aluno turma[NA] ={
        {909090,"João Carlos",7.16}, //0
        {808080,"Ana Claudia", 8.5}, //1
        {707070,"Rose", 9.0},        //2
        {615150,"Mário", 6.1},       //3
        {505031,"Luís", 7.8}         //4
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