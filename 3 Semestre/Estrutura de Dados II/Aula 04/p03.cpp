// exemplo utilizando o unordered_set
// diferente do map e set armazena apenas chave e não chave, valor
// ambos usam tabela hash

#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
    unordered_set<string> alunos;
    alunos.insert("beltrano");
    alunos.insert("fulano");
    alunos.insert("ciclano");
    alunos.insert("aasdas");

    cout << alunos.size() << endl;

    for(auto aluno: alunos){
        cout << aluno << endl;
    }
    return 0;
}