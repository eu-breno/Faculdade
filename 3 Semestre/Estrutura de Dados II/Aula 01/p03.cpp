// fazer a leitura de strings pegando toda a linha

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int n;
    ifstream arq;
    string name; // nome do arq
    cout << "Digite o nome do arquivo: ";
    getline(cin, name);
    arq.open(name); 
    if(!arq){
        cout << "Erro ao abrir o arquivo!" << endl;
        exit(1);
    }

    string linha;


    while (getline(arq, linha)){
        cout << linha << endl;
    }

    arq.close();
    return 0;
}