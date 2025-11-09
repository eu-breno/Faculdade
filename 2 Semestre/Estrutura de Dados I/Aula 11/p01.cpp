/* CAPACIDADE E TAMANHO SÃO CARACTERÍSTICAS DIFERENTES
SIZE() - A QUANTIDADE DE ELEMENTO
CAPACITY - A CAPACIDADE MOMENTANEA DE ELEMENTOS
*/
#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<double> v; 
    cout << "Digite 0 p/sair\n";
    double x;
    cout << "Tamanho: " << v.size()
         << " Capacidade: " << v.capacity()
         << endl;

    //cin >> x -> ler ate o EOF (final do arquivo)
    // x !=0  = Executa até o usuário digitar 0 p/ o X
    while(cin >> x && x!=0){ 
        v.push_back(x);
        cout << "Tamanho: " << v.size()
         << " Capacidade: " << v.capacity()
         << endl;
    }

    return 0;
}