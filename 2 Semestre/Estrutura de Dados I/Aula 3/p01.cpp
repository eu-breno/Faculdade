// Exemplo de função com passagem de parametro por valor e por referencia
#include <iostream>
using namespace std;
/*
--- Por valor: 'float a' (sem o &a) -- Cria uma copia do valor
--- Por referencia: 'float &a) (& à frente do a) -- 
        --- A variavel da função irá referenciar o endereço de memoria da 
            variavel passada por parametro
*/
void adiciona(float &a, float b){
    a +=b; // a = a + b;    
    cout << "Na função adiciona " 
         << a << endl;        
}
int main(){
    float x =10, y=0.5;
    adiciona(x,y);
    
    cout << "Na main " << x << endl;

    return 0;
}