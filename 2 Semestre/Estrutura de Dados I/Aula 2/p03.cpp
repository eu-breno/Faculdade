#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    float vet[] {9.02, 3.120, 4.55, 6.333, 7.030};
    float soma = 0;
    for (int i = 0; i < 5;i++){
        soma += vet[i]; // soma = soma + vet[i];
    }  
    cout << "Soma: " << fixed << setprecision(2) << soma << endl;
    return 0;
}