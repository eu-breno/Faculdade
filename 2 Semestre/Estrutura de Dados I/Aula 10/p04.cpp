#include <iostream>

using namespace std;
int main(){
    int a = 10;
    int *p = &a; //p aponta para o end. de a

    int **pp; //declara um ponteiro para ponteiro

    /*Atribui o end. do ponteiro p ao 
    ponteiro para ponteiro PP*/
    pp = &p; 
        
    cout << pp << " " // imprime o endereço de 'p' por meio do ponteiro 'pp'
         << *pp << " " // imprime o valor apontado por 'pp', que o endereço de 'a' (valor de 'p')
         << **pp << endl; // imprime o valor apontado duas vezes por 'pp', ou seja, o valor de 'a'
    return 0;
}