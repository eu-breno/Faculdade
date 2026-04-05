package br.upf.ccc.appaula02.view;

import java.util.ArrayList;

import br.upf.ccc.appaula02.model.Conta;

public class App {
    public static void main(String[] args) throws Exception {
        Conta c1 = new Conta();
        c1.setNumero(123);
        c1.setTitular("João");
        // c1.saldo = 1000.0f; // Não é possível acessar diretamente o saldo, pois ele é privado
        c1.depositar(1000f);

        // usando os contrutores
        Conta c2 = new Conta(456, "Maria");
        c2.depositar(500f);

        Conta c3 = new Conta(1);
        c3.setTitular("Pedro");
        c3.depositar(200f);

        // adicionar as contas em um arraylist e criar mais algumas e colocar também no arraylist   
        ArrayList<Conta> contas = new ArrayList<>();
        contas.add(c1);
        contas.add(c2);
        contas.add(c3);
        contas.add(new Conta(789, "Ana"));
        contas.add(new Conta(2, "Carlos"));     

    }
}
