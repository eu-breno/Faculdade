#include <iostream>

using namespace std;

int main(){
    const int N = 3; //Criamos uma constante de valor N

    int vet[N]; //Definiu um vetor de tam N

    cout << "Digite "<< N << " valores\n";
    for (int i=0; i<N; i++){
        cin >> vet[i];
    }

    cout << "Exibindo os valores do vetor\n";
    for (int i=0; i<N; i++){
        cout <<"Vet[" <<i <<"]= " << vet[i] << endl;
    }

    cout << "Exibindo em órdem reversa\n";
    for (int i=N-1; i>=0; i--){
        cout <<"Vet[" <<i <<"]= " << vet[i] << endl;
    }


    return 0;
}