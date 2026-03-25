#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <fstream>
#include <vector>

using namespace std;

struct Info{
    string palavra;
    int qtd=0;
};

#define HASH_TABLE_SIZE 97

list<Info> hashTable[HASH_TABLE_SIZE];

int hash_function(string palavra){
    return palavra.size() % HASH_TABLE_SIZE;
};

void inserir(Info novaPalavra){
    int indice = hash_function(novaPalavra.palavra);
    hashTable[indice].push_back(novaPalavra);
};

bool buscar(string palavra){
    int indice = hash_function(palavra);
    for (auto it = hashTable[indice].begin(); it != hashTable[indice].end(); ++it){ 
        if(it -> palavra == palavra){ 
        // i = 0 nesse caso, o iteraror n é como se fosse um i[x][y], ele ja acessa a "lista dentro da lista"
            it->qtd++;
            return true;
        }
    }
    return false;
};

void imprimir(){
    for (int i=0; i<HASH_TABLE_SIZE; i++){
        for(auto it = hashTable[i].begin(); it != hashTable[i].end(); it++){
            cout << "Palavra: " << it->palavra << " // Quantidade: " << it->qtd << " // indice: " << i << " | " << endl;
        }
    }
};

int main(){
    ifstream arq("clarissa.txt");
    char ch;

    string word;
    Info aux;

    cout << "Loading..." << endl;

    while (arq.get(ch)){
        if(isalpha(ch)){
            word += tolower(ch);
        } else if (word.size()>0){
            bool flag = buscar(word);

            if(!flag){
                aux.palavra = word;
                aux.qtd = 1;
                inserir(aux);
            }

            word.clear();
        }
    }

    imprimir();

    return 0;
}