#include <iostream>

using namespace std;

int main(){

    /* Declara o ponteiro e aponta para um espaço de memoria 
    que caberá um int.
    Nesse caso a unica forma de acesso será via ponteiro, pois não
    temos um nome atrelado aquele end. de memoria
    */
    int *p = new int;
    *p = 0;
    cout << p <<" " << *p << endl;
    delete p;

    //CUIDADO: sE TROCAMOS O PONTEIRO, o endereço de memoria fica perdido 
    //VAZAMENTO DE MEMÓRIA
    //Exemplo
    int a = 5;
    int *p1;
    p1 = &a;

    int *p2 = new int;
    *p2 = 35;
    //*p2 = *p1
    p2 = p1;

    cout << a << " " << *p1 << " " << *p2 << endl;
    

    return 0;
}