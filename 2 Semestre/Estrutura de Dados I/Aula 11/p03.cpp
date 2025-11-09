#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<string> v;
    v.push_back("A");
    v.push_back("B");
    v.push_back("C");
    v.push_back("D");
    v.push_back("E");

    cout << "Percorre utilizando o 'old school' for\n";
    for(int i=0; i<v.size(); i++){
        cout << v[i] << endl;
    }
    cout << "Ordem reversa 'old school'\n";
    // E D C B A
    for(int i=v.size()-1; i>=0; i--){
        cout<< v[i] << endl;
    }
    cout << "Iterando utilizando o range for\n";
    for(auto n:v){
        cout << n << endl;
    }    
    cout << "Percorrendo utlizando iterator\n";
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *it << endl;
    }
    cout << "Percorrendo utlizando reverse iterator\n";
    for(auto it = v.rbegin(); it != v.rend(); it++){
        cout << *it << endl;
    }


    return 0;
}