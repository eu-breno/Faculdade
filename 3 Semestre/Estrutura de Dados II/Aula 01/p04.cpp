#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
    ofstream arq;
    arq.open("tabela.txt");
    for (int i=1; i<=100; i++){
        // arq << i << endl;
        arq << dec << i << " " << hex << uppercase << i << endl;
    }
    arq.close();
    return 0;
}