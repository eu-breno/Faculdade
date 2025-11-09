
#include <iostream>

using namespace std;

int main(){
    const int NL = 3;
    const int NC = 3;
    float m[NL][NC]{
        //0    1    2
        {1.5, 0.4, 9.1},  //0
        {0.6, 6.4, 10.2}, //1
        {8.7, 1.7, 15.3}};//2

    //Exibindo a matriz;    
    for (int i=0; i<NL;i++){  // i = indice para linhas
        for(int j=0; j<NC;j++){ //j = indice para as colunas
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Ordem da execução dos laços\n";
    cout<< "l,c\n";
    //Exibindo apenas os indices para entendermos o funcionamento dos dois laços de repetição
    for (int i=0; i<NL;i++){  // i = indice para linhas
        for(int j=0; j<NC;j++){ //j = indice para as colunas
           cout << i << "," << j << endl;
        }
        //cout << endl;
    }
    return 0;
}