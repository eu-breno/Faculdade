#include <iostream>

using namespace std;

void dobrar(int v[], int tamanho){
    for(int i = 0; i<tamanho; i++){
        v[i] = v[i] *2;
    }

}

int main(){
    int vetor[3] = {1,2,3};
    dobrar(vetor,3); // Vetores são sempre passados por referência
    for(int i = 0; i<3; i++){
        cout << vetor[i] << " "; //Resultado: 2,4,6
    }


    return 0;
}