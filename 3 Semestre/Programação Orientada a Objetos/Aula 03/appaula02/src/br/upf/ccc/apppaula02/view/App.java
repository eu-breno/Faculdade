package br.upf.ccc.apppaula02.view;

import br.upf.ccc.apppaula02.model.Conta;

public class App {
    public static void main(String[] args) throws Exception {
        Conta c1 = new Conta();
        c1.setNumero(-123);
        c1.setTitular("Breno");
        // c1.saldo = 1000.0f;  não é possível pois ele é privado

        Conta c2 = new Conta(456, "Maria");
        c2.depositar(500f);

        Conta c3 = new Conta(789, "Pedro");
        c3.setTitular("Pedro");
        c3.depositar(200f);


    }
}
