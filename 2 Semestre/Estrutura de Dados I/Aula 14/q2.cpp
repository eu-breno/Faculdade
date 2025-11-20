#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    stack<int> pilha;
    string comando;

    for (int i = 0; i < N; i++) {
        cin >> comando;

        if (comando == "PUSH") {
            int x;
            cin >> x;
            pilha.push(x);
        } 
        else if (comando == "ADD") {
            int a = pilha.top(); pilha.pop();
            int b = pilha.top(); pilha.pop();
            pilha.push(a + b);
        } 
        else if (comando == "SUB") {
            int a = pilha.top(); pilha.pop(); // topo
            int b = pilha.top(); pilha.pop(); // segundo do topo
            pilha.push(b - a);               // segundo - topo
        } 
        else if (comando == "MUL") {
            int a = pilha.top(); pilha.pop();
            int b = pilha.top(); pilha.pop();
            pilha.push(a * b);
        } 
        else if (comando == "PRINT") {
            int x = pilha.top();
            pilha.pop();
            cout << x << '\n';
        }
    }

    return 0;
}
