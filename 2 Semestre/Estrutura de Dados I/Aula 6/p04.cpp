//Exemplo utilizando um vetor de structs 
#include <iostream>

using namespace std;

//Criamos nossa struct aluno
struct aluno{
    int matricula;
    string nome;
    float nota;
};

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

    //exibimos o vetor
    for(int i=0; i<NA; i++){
        cout << "Matr.: " << turma[i].matricula  << ",  ";
        cout << "Nome: " << turma[i].nome << ", ";
        cout << "Nota: " << turma[i].nota  << ".";
        cout << endl;
    }

    return 0;
}