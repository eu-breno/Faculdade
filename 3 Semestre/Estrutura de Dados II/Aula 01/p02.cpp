// fazer o usuario escolher o arq em tempo de execucao

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
    while(arq >> n){
        cout << n << endl;
    }

    arq.close();
    return 0;
}