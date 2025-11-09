//Exemplo 1 de ponteiros

#include <iostream>

using namespace std;

int main(){
    int a = 10; // variavel do tipo int
    int *p; // p é um ponteiro para int

    p = &a; //p recebe o endereço de a;
    
    cout << p << endl;  // end. de memoria 
    cout << *p << endl;  // valor apontado por p

    a = 20;
    cout << *p << endl;  // valor apontado por p

    int b = *p/4;
    cout << b << endl;

    return 0;
}