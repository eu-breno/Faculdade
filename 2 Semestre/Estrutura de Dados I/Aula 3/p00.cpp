/// Exemplo 1 de funções

#include <iostream>

using namespace std;

// função do tipo void, não precisa de um return
void imprimir(string texto){
    cout << "O texto recebido é: " << texto << endl;
}

int soma(int x, int y){
    int t = x + y;
    return t;
}

int main(){    
    imprimir("Olá, função!");
    int x = 10, y = 2;
    int t = 999; // Exemplo de variavel local
    int s = soma(y,x);
    cout << "Soma: " << s << endl;
    /*Apenas para mostrar que a variavel 'T'da main não é 
    a mesma da variavel 't' da função soma
    ---Conceito de variáveis locais

    */
    cout << "Valor do T: " << t << endl;
    return 0;
}