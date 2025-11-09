#include <iostream>
using namespace std;

void troca_por_valor(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

void troca_por_referencia(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 3, b = 7;
    troca_por_referencia(a, b);
    // por valor Continua a=3, b=7   
    cout << "a = " << a << ", b = " << b << endl;  
    return 0;
}
