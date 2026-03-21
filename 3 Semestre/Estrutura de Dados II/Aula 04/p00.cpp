// Exemplo de tabelas hash
// Utilizando tratamento de colisão por encadeamento exterior

#include <iostream>
#include <list>
#include <string>

using namespace std;

// struct definindo as infos do aluno
struct Aluno {
    string nome;
    int matricula;
    string email;
};

// definindo o tamanho da hash em 10
#define HASH_TABLE_SIZE 10

/*  criando uma lista do tipo alunos, com a "variavel" hashTable 
    com o tamanho da HASH_TABLE_SIZE
    em outras palavras
    a hashTable é um vetor do tamanho fixo de HASH_TABLE_SIZE, 
    onde cada indice irá armazenar uma lista do tipo aluno */
list<Aluno> hashTable[HASH_TABLE_SIZE];

// funcao que retorna o valor do indice
int hash_function(int numDaMatricula){
    return numDaMatricula % HASH_TABLE_SIZE;
};

/* Insere um objeto do tipo Aluno na tabela hash.
   1. Calcula o índice (posição no vetor) usando a matrícula como chave na função hash.
   2. Acessa a lista encadeada correspondente a esse índice no vetor hashTable.
   3. Adiciona o objeto Aluno ao final dessa lista (tratamento de colisão por encadeamento).
*/
void inserir(Aluno nomeAluno){
    int indice = hash_function(nomeAluno.matricula);
    hashTable[indice].push_back(nomeAluno);
};

// realiza a busca do aluno na tabela
Aluno buscar(int matricula){
    int indice = hash_function(matricula);
    for (auto it = hashTable[indice].begin(); it != hashTable[indice].end(); ++it){ 
        if(it -> matricula == matricula){
            return *it; // iterator retorna um valor
        }
    }
    return Aluno();
};

// remover um aluno
void remover(int matricula){
    // aqui ele faz a busca do indice na hash
    int indice = hash_function(matricula);
    // depois ele faz uma busca matriz no vetor/lista da hash
    // nesse caso ele faz um iteretor, colocando o valor do comeco do indice da tabela
    // o mesmo com o a comparação, comparando com o final/tamanho da tabela
    for (auto it = hashTable[indice].begin(); it != hashTable[indice].end(); ++it){
        if(it->matricula == matricula){
            hashTable[indice].erase(it);
            cout << "Aluno " << matricula << " removido." << endl;
            return;
        }
    }
};

void imprimir(){
    for (int i=0; i<HASH_TABLE_SIZE; i++){
        for(auto it = hashTable[i].begin(); it != hashTable[i].end(); it++){
            cout << "Nome do aluno: " << it->nome << endl;
            cout << "Matricula: " << it->matricula << endl;
            cout << "Email: " << it->email << endl;
        }
    }
};

int main(){
    // definindo as variaveis
    Aluno aluno1 = {"Joao Pedro", 123, "jp@gmail.com"};
    Aluno aluno2 = {"Fulanison da Silva", 535, "fulassilv@gmail.com"};
    Aluno aluno3 = {"Maria Applica Tivo", 421, "mar@gmail.com"};
    Aluno aluno4 = {"Sei Lahnome", 876, "sla@gmail.com"};
    Aluno aluno5 = {"Corre Thoor", 453, "corre@gmail.com"};

    // inserindo na hash
    inserir(aluno1);inserir(aluno2);inserir(aluno3);inserir(aluno4);inserir(aluno5);

    // realizando a busca
    Aluno alunoBuscado = buscar(123);

    // verifica se a busca esta vazia e mostra o nome
    if(alunoBuscado.nome.empty()){
        cout << "Aluno não encontrado\n";
    } else {
        cout << "Aluno buscado: " << alunoBuscado.nome << endl;
    }

    // teste para imprimir e apagar um aluno
    cout << "Iprimindo alunos...\n";
    imprimir();
    remover(123);
    cout << "\n===============================\n\n";
    cout << "Iprimindo alunos...\n";
    imprimir();

    return 0;
}