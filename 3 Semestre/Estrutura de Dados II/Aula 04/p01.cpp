// unordered_map

#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
                // chave, valor
    unordered_map<string, float> notas;
    notas["fulano"] = 9.5;
    notas["ciclano"] = 10;
    notas["beltrano"] = 7.8;

    cout << notas["beltrano"] << endl;
    cout << "Tamanho da estrutura: " << notas.size() << endl;

    // Buscar alguma chave que não esta presente:
    cout << notas["fulaninho"] << endl;

    cout << "Percorrendo a tabela hash\n";
    for(auto n: notas){
        cout << n.first << ": " << n.second << endl;
    }

    cout << "Novo tamanho da estrura: " << notas.size() << endl;

    return 0;
}