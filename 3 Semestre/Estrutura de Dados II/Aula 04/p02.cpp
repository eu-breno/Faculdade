#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    unordered_map<int, string> alunos;

    alunos[951] = "fulano2 Dhenovo";
    alunos[573] = "ciclanildo ";
    alunos[123] = "beltranou Dhenovou";
    alunos[867] = "ciclanando";

    int matr;
    cout << "Informe a matricula (0 para sair)\n";
    while (cin>>matr && matr !=0){
        if (alunos.count(matr)>0){
            cout << alunos[matr] << endl;
        } else {
            cout << "404 not found!" << endl;
        }
    }

    return 0;
}