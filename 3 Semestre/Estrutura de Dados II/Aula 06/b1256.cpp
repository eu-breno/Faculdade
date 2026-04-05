#include <iostream>
#include <cctype>
#include <list>

#define HASH_SIZE 100

using namespace std;

list<int> arr[HASH_SIZE];

int hashfn(int value, int size){
    return value % size;
}

void inserir(int value, int size){
    int index = hashfn(value, size);
    arr[index].push_back(value);
}

void imprimir(int size){
    for(int i=0;i<size;i++){
        cout << i << " -> ";
        for(const auto teste : arr[i]){
            cout << teste << " -> ";
        }
        cout << "\\" << endl;
    }
}

int main(){
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        int hash_size = 0;
        int values = 0;
        cin >> hash_size >> values;

        for(int i=0;i<values;i++){
            int v;
            cin >> v;
            inserir(v, hash_size);
        }
        imprimir(hash_size);
        if(i !=  N-1){
            cout << endl;
        }
        
        
        for(int i=0;i<hash_size;i++){
            arr[i].clear();
        }
    }

    return 0;
}