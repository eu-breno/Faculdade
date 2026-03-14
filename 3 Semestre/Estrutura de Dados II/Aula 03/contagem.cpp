//Problema de contagem de palavras em um arquivo
#include <iostream>
#include <cctype>
#include <fstream>
#include <vector>

using namespace std;

struct WordCount{
    string word;
    int count;
};

int main(){
    ifstream arq("clarissa.txt");
    if(!arq){ 
        cout << "Não foi possivel abrir o arquivo!" << endl;
        return 1;
    }
    char ch;
    string word;
    vector<WordCount> classificacao;
    while(arq.get(ch)){
        if(isalpha(ch)){
            word+=tolower(ch);
        }else if(word.size()>0){
            bool found = false;
            for (auto &p : classificacao) {
                if (p.word == word) {
                    p.count++;
                    found = true;
                    break;
                }
            }
            if (!found) {
                classificacao.push_back({word, 1});
            }
            word.clear(); // LImpa a string palavra
        }
    }
    arq.close();
    // Imprimir as palavras e suas contagens
    for (const auto &palavra : classificacao) {
        cout << palavra.word << ": " << palavra.count << endl;
    }
    //Imprimir a classificação em um arquivo de saida;
    ofstream tab; 
    tab.open("saida.csv");
    for (const auto &palavra : classificacao) {
        tab << palavra.word << ";" << palavra.count << endl;
    }
    tab.close();
    return 0;
}