#include <iostream>
#include <list>

using namespace std;

struct compra {
    string nome, marca;
    int quantidade;
};

int main() {
    list<compra> lista;
    compra aux;

    int escolha;
    string alvo;

    cout << "=======MENU=======\n"
         << "1 - Adicionar um item à lista\n"
         << "2 - Remover um item da lista\n" 
         << "3 - Listar todos os itens\n" 
         << "4 - Sair do programa\n";

    while (true) {
        cout << "\nInsira o numero: ";
        cin >> escolha;

        switch (escolha) {
            case 1:
                cout << "\nDigite: nome quantidade marca: ";
                cin >> aux.nome >> aux.quantidade >> aux.marca;
                lista.push_back(aux);
                break;

            case 2:
                cout << "\nDigite o nome do produto para remover: ";
                cin >> alvo;
                lista.remove_if([&](const compra& n){ return n.nome == alvo; });
                break;

            case 3:
                cout << "\nNome | Quantidade | Marca\n";
                for (auto& n : lista) {
                    cout << n.nome << " | " << n.quantidade << " | " << n.marca << endl;
                }
                break;

            case 4:
                cout << "\n======FIM DO PROGRAMA======\n";
                return 0;

            default:
                cout << "Opcao invalida!\n";
        }
    }

    return 0;
}
