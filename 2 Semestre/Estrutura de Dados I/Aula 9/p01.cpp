/* Exemplo de Fila
FIFO - First In First Out
PRIMEIRO A ENTRAR É O PRIMEIRO A SAIR
*/
#include <iostream>
#include <queue> // Inclui o container std:queue

using namespace std;

int main(){
    queue<int> fila; 

    fila.push(100); //Adicionar o valor 100 na fila
    fila.push(200);
    fila.push(300);

    //cout << "Tamanho da fila: " << fila.size() << endl;

    while(!fila.empty()){ //fila.size() > 0
        cout << "Size: " << fila.size() << endl; // Tamanho
        cout << "Front: "<< fila.front() << endl; // Primeiro elemento
        cout << "Back: " << fila.back() << endl; // Ultimo elemento
        cout << endl;
        fila.pop();        

        
    }

    return 0;
}