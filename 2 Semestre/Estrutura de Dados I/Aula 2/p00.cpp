#include <iostream>

using namespace std;


int main(){
    int vet[6]; //Definiu um vetor de tam 6

    cout << "Digite 6 valores\n";
    for (int i=0; i<6; i++){
        cin >> vet[i];
    }

    cout << "Exibindo os valores do vetor\n";
    for (int i=0; i<6; i++){
        cout <<"Vet[" <<i <<"]= " << vet[i] << endl;
    }

    cout << "Exibindo em órdem reversa\n";
    for (int i=5; i>=0; i--){
        cout <<"Vet[" <<i <<"]= " << vet[i] << endl;
    }


    return 0;
}