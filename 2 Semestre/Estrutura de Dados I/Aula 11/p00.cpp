//array list ou vector - Exemplo 1
#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<int> v; //Vector de int inicialmente vazio
    cout << "Size: " << v.size() << endl;
    v.push_back(10); //insere ao final do vector
    v.push_back(5);
    v.push_back(30);

    for(int i=0; i<v.size();i++){
        cout << i << ": " << v[i] << endl;
    }
    
    v.pop_back(); //Remove do final
    cout << "Size: " << v.size() << endl;




}