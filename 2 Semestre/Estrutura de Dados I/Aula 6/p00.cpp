#include <iostream>
#include "vetor.cpp"
#include <algorithm> // utilizar a função sort

using namespace std;

const int N= 100000;
int main(){

    //ordenação utilizando sort()
    //passamos para a função o nome do vetor, nome+tamanho
         //  -- Significa que estamos passando o vetor, o 
         //      endereço inicial e final
    sort(vet,vet+N);

    //Saída
    //for(int i=0; i <N; i++){
    //    cout << vet[i] << endl;
    //}

    return 0;
}