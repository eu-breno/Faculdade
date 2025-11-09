//implementar uma fila com struct
#include <iostream>
#include <queue>

using namespace std;

struct pessoa{
    string nome,email;
};

int main(){
    queue<pessoa> fila;
    pessoa aux; 

    while(true){
        cout << "Digite um nome ou FIM para sair ";
        /*AUX - servirá somente para coletar 
        as informações lida no teclado, naquele momento, ou seja,
        irá sobreescrever ele em cada iteração. Os dados serão
        salvos na fila usando o push.

        */
        getline(cin,aux.nome);
        if(aux.nome == "FIM")break;

        cout << "E-mail: ";
        getline(cin,aux.email);
        fila.push(aux);

        cout << "T: " << fila.size() << endl;

    }

    while(!fila.empty()){ // Enquanto ela não estiver vazia
        cout << fila.front().nome 
             << " " 
             << fila.front().email
             << endl;
        fila.pop();    
    }


    return 0;
}