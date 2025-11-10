#include <iostream>
#include <queue>

using namespace std;

struct paciente{
    char tipo, prior;
    string nome;
    int h, m;
};

struct infoAD{
    bool temNaFila = true;
    int horaA, minA, tipo; //dados do A
    int tamV, tamA, tamD, tamB, atenD; // dados do D
};

int main(){
    queue<paciente>V, A, D, B;
    paciente p;
    queue<infoAD>chamadas;
    infoAD ia;
    int esperando = 0, pico = 0, atendidos = 0, esperaMaxima = 0, calculoEspera = 0, topoh = 0, topom = 0;
    int atendidosV = 0, atendidosA = 0, atendidosD = 0, atendidosB = 0; 

    // entrada e armaz dos dados
    while(true){
        cin >> p.tipo;
        if (p.tipo == 'Q'){
            break;
        } else if (p.tipo == 'C'){
            cin >> p.nome >> p.prior >> p.h >> p.m;
            if (p.prior == 'V') {
                V.push(p);
            } else if (p.prior == 'A'){
                A.push(p);
            } else if (p.prior == 'D'){
                D.push(p);
            } else if (p.prior == 'B'){
                B.push(p);
            }
            esperando++;
            if (esperando>pico) pico = esperando;
        } else if (p.tipo == 'A'){
            cin >> ia.horaA >> ia.minA;
            ia.tipo = 1;
            if (esperando == 0){
                ia.temNaFila = false;
                chamadas.push(ia);                
            } else {
                ia.temNaFila = true;
                if (!V.empty()){
                    topoh = V.front().h;
                    topom = V.front().m;
                    atendidosV++;
                    V.pop();
                } else if (!A.empty()){
                    topoh = A.front().h;
                    topom = A.front().m;
                    atendidosA++;
                    A.pop();
                } else if (!D.empty()){
                    topoh = D.front().h;
                    topom = D.front().m;
                    atendidosD++;
                    D.pop();
                } else {
                    topoh = B.front().h;
                    topom = B.front().m;
                    atendidosB++;
                    B.pop();
                }
                calculoEspera = (ia.horaA * 60 + ia.minA) - (topoh * 60 + topom);
                if (calculoEspera > esperaMaxima) esperaMaxima = calculoEspera;
                atendidos++;
                esperando--;
            }
        } else if (p.tipo == 'D'){
            ia.tipo = 2;
            ia.tamV = V.size(); ia.tamA = A.size(); ia.tamD = D.size(); ia.tamB = B.size(); ia.atenD = atendidos;
            chamadas.push(ia);
        }
    }

    //saida
    while(!chamadas.empty()){
        if(chamadas.front().tipo == 1){
            if (chamadas.front().temNaFila == false) cout << chamadas.front().horaA << " " << chamadas.front().minA << " Sem pacientes aguardando atendimento\n"; 
        
        } else{
            cout << "V:" << chamadas.front().tamV 
                 << " A:" << chamadas.front().tamA 
                 << " D:" << chamadas.front().tamD 
                 << " B:" << chamadas.front().tamB
                 << " | Atendidos:" << chamadas.front().atenD << endl;
        }
        chamadas.pop();
    }

    cout << "--- RELATORIO FINAL ---"
         << "\nTotal atendidos: " << atendidos
        << "\nPor prioridade: " << "V= " << atendidosV 
                                 << " A= " << atendidosA
                                 << " D= " << atendidosD
                                 << " B= " << atendidosB
         << "\nPico de lotacao: " << pico 
         << "\nEspera maxima: " << esperaMaxima << " min" << endl; 


    return 0;
}