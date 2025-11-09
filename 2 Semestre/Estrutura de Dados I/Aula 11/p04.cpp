#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<string> v;
    v.push_back("A");
    v.push_back("B");
    v.push_back("C");
    v.push_back("D");
    v.push_back("E");
    
    // função find, retornar a primeira ocorrência
    auto it = find(v.begin(),v.end(),"C");// da lib algorithm

    /*Se a função find retornar o mesmo endereço do end,
    significa que percorreu todo o vector e não encontrou 
    o elemento procurado
    */

    if(it == v.end()){
        cout << "Not found!\n";
    }else{ //ENCONTROU
        v.insert(it,"Z"); //Insere a string 'Z' na 'posição' it
    }

    for(auto n:v){
        cout << n << endl;
    }

    v.clear(); //deleta todo o conteúdo do verctor
    cout << "Tamanho: " << v.size()
    << " Capacidade: " << v.capacity()
    << endl; 

    return 0;
}