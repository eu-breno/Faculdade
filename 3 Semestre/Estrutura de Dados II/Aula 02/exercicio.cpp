#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream arq;
    string entrada;
    cout << "Digite o nome do arquivo: ";
    getline(cin, entrada);

    arq.open(entrada); 
    if(!arq){  
        cout << "Erro ao abrir o arquivo!" << endl;
        return 1;
    }

    char ch;

    int cont[256]={};

    while (arq.get(ch)){
        cont[int(ch)]++;
    }
    arq.close();

    ofstream tab;
    tab.open("contagem_caracteres.csv");
    for (int i=0; i<256; i++){
        if(cont[i]>0) tab << (isprint(i) ? char(i): ' ') << ";" << cont[i] << endl;
        
    }


    return 0;
}