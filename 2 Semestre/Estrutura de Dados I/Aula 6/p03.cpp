
#include <iostream>

using namespace std;

//Criamos nossa struct aluno
struct aluno{
    int matricula;
    string nome;
    float nota;
};

int main(){
    aluno fulano, ciclano; ///Declara a nossa variavel do tipo aluno 

    //Inserimos os dados na nossa variavel do tipo aluno 'fulano'
    //fulano.matricula = 909090;
    //fulano.nome = "João Carlos";
    //fulano.nota = 9.7;

    fulano = {909090,"João Carlos",9.7};
    //Exibir os dados
    cout << "Nome: " << fulano.nome << endl;
    cout << "Matr. " << fulano.matricula << endl;
    cout << "Nota: " << fulano.nota << endl;


    return 0;
}