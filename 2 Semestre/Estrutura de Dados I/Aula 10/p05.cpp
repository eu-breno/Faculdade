//Ponteiros para struct
#include <iostream>
using namespace std;

struct aluno{
    int matricula;
    string nome;
    
};

int main(){
    aluno eu = {909090,"Fulano de Tal"};
    aluno *p = &eu;
    
    cout << eu.matricula << endl; //Acesso direto
    cout << p << " " << p->matricula << endl; // Acesso indireto ao campo da estrutura (via ponteiro)

    p->nome = "Beltrano";

    cout << eu.nome << endl;

    return 0;
}