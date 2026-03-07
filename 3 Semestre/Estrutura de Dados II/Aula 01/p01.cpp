#include <iostream>
#include <fstream>

/* exemplo  de entrada de
dados utilizando arq externo */

using namespace std;

int main(){
    int n;
    ifstream arq;
    arq.open("numeros.txt"); // tenta abrir o arq
    if(!arq){  // se nao abriu o arquivo
        cout << "Erro ao abrir o arquivo!" << endl;
        exit(1);
    }
    while(arq >> n){
        cout << n << endl;
    }

    arq.close();
    return 0;
}