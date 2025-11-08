///Exemplos de laços de repetição
#include <iostream>

using namespace std;

int main(){
    int n = 0;
    cout << "Laço 'while' \n";
    /* Realiza o teste antes de entrar no looping
       -- Pode acontecer de não executar nenhuma vez - caso Falso*/
    while (n < 10){
        cout << n << endl;
        n++; // n = n + 1;  // Incrementando
    }

    cout << "Laço 'do while' \n";
    /* Realiza o teste após a execução. 
        - Garante que pelo menos uma vez seja executado
    */
    do{
        cout << n << endl;
        n--; // n = n - 1; //Decrementando
    }while(n > 0);

    cout << "Looping 'infinito'\n";
    /*Executa infinitamente até a condição de parada: 
        if (){
            break;
    */
    while (true){
        if(n == 5){
            break;
        }
        cout << n << endl;
        n++;
    }

    cout << "Laço 'for' \n";

    /* três partes separadas por ;
        1º Inicialização da variavel de controle;
        2º teste enquanto: Enquanto vai permanecer no laço - Ate que for verdadeiro
        3º Atualização da variavel de controle: Incremento            
    */
    for(int i=0; i<=20; i++){
        cout << i << endl;
    }


    return 0;
}