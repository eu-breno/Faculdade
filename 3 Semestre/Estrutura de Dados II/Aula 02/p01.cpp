// Exemplo 01 Extrai caracter a caracter do texto usando o .get
// Comparação com formas diferentes de extrair
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream arq("gpl3.txt");  // Acesso direto ao arq sem o uso do .open
    if (!arq){
        cout << "Erro. Verifique o arquivo!\n";
        return 1;
    }
    char ch; 
    int cont =0;
    while(arq.get(ch)){  // extrai um unico caracter do texto
        cout << ch << endl;
        cont ++ ;
    }
    cout << "Quantidade de caracteres: " << cont << endl;
    arq.close();
    return 0;
}