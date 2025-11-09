#include <iostream>

int fat(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fat(n - 1);
}

int main() {
    int numero;
    std::cout << "Digite um número inteiro: ";
    std::cin >> numero;

    if (numero < 0) {
        std::cout << "O fatorial de um número negativo não é definido." << std::endl;
    } else {
        int fatorial = fat(numero);
        std::cout << "O fatorial de " << numero << " é " << fatorial << std::endl;
    }

    return 0;
}


