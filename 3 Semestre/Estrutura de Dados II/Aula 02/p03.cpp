#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;
int main(){
    ifstream arq("gpl3.txt");
    if(!arq){
        cout << "Erro ao abrir!" << endl;
        return 1;
    }

    int cont[256]={};

    char ch;
    while (arq.get(ch)){
        cont[int(ch)]++;
        // cout << ch << " - " << int(ch) << endl;
    }
    arq.close();
    for (int i=0; i<256; i++){
        if(cont[i]>0) // encontrou caracter na leitura do texto
        cout << i << " "
             << (isprint(i) ? char(i): ' ') << " " // nao sao printaveis
             << cont[i] << endl; // quantas vezes existe o caracter
    }

    return 0;
}