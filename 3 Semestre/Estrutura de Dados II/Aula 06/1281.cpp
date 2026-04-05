#include <iostream>
#include <unordered_map>
#include <iomanip>

int main(){

     int N;
     std::cin >> N;

     for(int i = 0; i < N; i ++){
        std::unordered_map<std::string, double> preco;
        int M;
        std::cin >> M;
        
        for(int j = 0; j < M; j++){
            std::string item;
            double valor;
            std::cin >> item >> valor;
            preco[item] = valor;
        }

        int P;
        std::cin >> P;
        double total = 0;

        for(int k = 0; k < P; k ++){
            std::string item;
            int quantidade;
            std::cin >> item >> quantidade;
            total += preco[item] * quantidade;
        }

        std::cout << std::fixed << std::setprecision(2) 
                  << "R$ " << total << std::endl;
    }
    
    return 0;
}