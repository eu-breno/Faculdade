// Exemplo 2: Funções de validação de caracteres da lib cctype
// Separando em diferentes tipos de caracteres
#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>
using namespace std;
int main(){
    ifstream arq("gpl3.txt");
    if(!arq){
        cout << "faio\n";
        return 1;
    }
    char ch;
    int nLetras=0, nDig=0, nSpace =0, nOutros=0;
    while(arq.get(ch)){
        if(isalpha(ch)) nLetras++;
        else if(isdigit(ch)) nDig++;
        else if(isspace(ch)) nSpace++;
        else nOutros++;
    }

    cout << "Numeros de letras: " << nLetras << endl;
    cout << "Numero de digitos numericos: " << nDig << endl;
    cout << "Numero de espaços: " << nSpace << endl;
    cout << "Numero do resto: " << nOutros << endl;
    cout << endl;

    int totalch = nLetras + nDig + nSpace + nOutros;

    cout << "Total de caracteres: " << totalch << endl;
    cout << "Sendo:\n" << fixed << setprecision(2)
    << nLetras << " letras(" << nLetras *100.0/totalch << "%)\n"
    << nDig << " digitos(" << nDig *100.0/totalch << "%)\n"
    << nSpace << " espaços(" << nSpace *100.0/totalch << "%)\n"
    << nOutros << " outros(" << nOutros *100.0/totalch << "%)\n";
    arq.close();
    return 0;
}