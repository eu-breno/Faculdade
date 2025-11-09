#include <iostream>
#include <vector>

using namespace std;
int main(){
    int n;
    cin >> n;    
    vector <string> v(n); //(TAMANHO MINIMO)
    for(int i=0; i<n;i++){
        cin >> v[i];
    }
    cout << "Tamanho: " << v.size()
        << " Capacidade: " << v.capacity()
        << endl;

    v.push_back("200");
    v.push_back("teste");
    cout << "Tamanho: " << v.size()
        << " Capacidade: " << v.capacity()
        << endl;

    return 0;
}