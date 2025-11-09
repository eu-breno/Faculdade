//Primeiro exemplo de struct 
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
    fulano.matricula = 909090;
    fulano.nome = "João Carlos";
    fulano.nota = 9.7;

    //Exibir os dados
    cout << "Nome: " << fulano.nome << endl;
    cout << "Matr. " << fulano.matricula << endl;
    cout << "Nota: " << fulano.nota << endl;

    ///Inserção de dados pelo terminal - 
    cout << "Digite o nome, depois a nota e por ultimo a matr.\n";  
    getline(cin,ciclano.nome); // Ler o nome completo
    cin >> ciclano.nota;
    cin >> ciclano.matricula;

      //Exibir os dados
    cout << "Nome: " << ciclano.nome << endl;
    cout << "Matr. " << ciclano.matricula << endl;
    cout << "Nota: " << ciclano.nota << endl;
    return 0;
}