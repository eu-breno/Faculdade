package br.upf.ccc.appaula02.view;

import java.util.ArrayList;

import br.upf.ccc.appaula02.model.Conta;
import br.upf.ccc.appaula02.util.Teclado;

public class AppUserConsole {

    // Atributo para manter uma coleção de contas em memória
    static ArrayList<Conta> contas = new ArrayList<>();

    public static void main(String[] args) {
        System.out.println("Gerenciador de Contas em Memória");
        while (true) {
            System.out.println("----------------------------------------------------");
            System.out.println("1. Criar, 2. Listar, 3. Alterar, 4. Excluir, 5. Sair");
            Integer lido = Teclado.lerInteger("Informe uma opção: ");
            System.out.println("----------------------------------------------------");
            switch (lido) {
                case 1:
                    criar();
                    break;
                case 2:
                    listar();
                    break;
                case 3:
                    alterar();
                    break;
                case 4:
                    excluir();
                    break;
                case 5:
                    System.out.println("Saindo...");
                    System.exit(0);
                default:
                    System.out.println("Opção inválida. Tente novamente.");
                    break;
            }

        }


    }

    private static void excluir() {
        System.out.println("Excluir conta");
        // 1. Ler o número da conta a ser excluída
        Integer numero = Teclado.lerInteger("Informe o número da conta a ser excluída: ");
        // 2. Encontrar a conta na coleção de contas

/* 
        // Localizando conta de forma manual (sem usar equals)
        Conta contaEncontrada = null;
        for (Conta conta : contas) {
            if (conta.getNumero().equals(numero)) {
                contaEncontrada = conta;
                break;
            }
        }
        Conta contaTemp = new Conta(numero);
        Conta contaTemp2 = new Conta(numero);
        if (contaTemp.equals(contaTemp2)) {
           System.out.println("Contas são iguais"); 
        } else {
           System.out.println("Contas são diferentes");             
*/

        // Usando identidade para encontrar a conta
        Conta contaTemp = new Conta(numero);
        // 3. Remover a conta da coleção de contas
        if (contas.contains(contaTemp)) {
            contas.remove(contaTemp);
            System.out.println("Conta excluída com sucesso!");
        } else {
            System.out.println("Conta não encontrada.");
        }
    }

    private static void alterar() {
        System.out.println("Alterar conta");
        // 1. Ler o número da conta a ser excluída
        Integer numero = Teclado.lerInteger("Informe o número da conta a ser alterada: ");
        // 2. Encontrar a conta na coleção de contas        
        Conta contaTemp = new Conta(numero);
        int index = contas.indexOf(contaTemp);
        if (index != -1) {
            Conta contaEncontrada = contas.get(index);
            // 3. Ler os novos dados da conta e atualizar os atributos
            System.out.println("Titular atual: " + contaEncontrada.getTitular());
            contaEncontrada.setTitular(Teclado.lerString("Informe o novo nome do titular: "));
            System.out.println("Conta alterada com sucesso!");
        } else {
            System.out.println("Conta não encontrada.");
        }
    }

    private static void listar() {
        System.out.println("Listar contas");
        if (contas.isEmpty()) {
            System.out.println("Nenhuma conta cadastrada.");
        } else {
            for (Conta conta : contas) {
                System.out.println(conta);
            }
        }
    }

    private static void criar() {
        System.out.println("Criar conta");
        // 1. Criar a conta
        Conta conta = new Conta();
        // 2. Ler os dados da conta e inicializar os atributos = objeto pronto
        conta.setNumero(Teclado.lerInteger("Informe o número da conta: "));
        conta.setTitular(Teclado.lerString("Informe o nome do titular: "));
        // 3. Adicionar a conta na coleção de contas
        contas.add(conta);
        System.out.println("Conta criada com sucesso!");
    }

}
