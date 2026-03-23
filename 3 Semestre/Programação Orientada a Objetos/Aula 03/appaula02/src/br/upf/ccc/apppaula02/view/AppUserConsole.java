package br.upf.ccc.apppaula02.view;
import java.util.ArrayList;
import br.upf.ccc.apppaula02.model.Conta;
import br.upf.ccc.apppaula02.util.Teclado;

public class AppUserConsole {
    // Atributo para manter uma coleção de contas em memória

    static ArrayList<Conta> contas = new ArrayList<>();

    public static void main(String[] args){
        while (true){
            System.out.println("\n======== Gerenciador de contas em memória ========\n");

            System.out.println("Digite:\n 1. Criar\n 2. Listar\n 3. Alterar\n 4. Excluir\n 5. Sair\n");


            Integer lido = Teclado.lerInteger("Digite aqui sua opção: ");

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
                    excluir ();
                    break;
                case 5:
                    System.out.println("Saindo");
                    System.exit(0);
                default:
                    break;  
                }
        }
    }
    private static void excluir(){
        System.out.println("Excluir conta");
        // 1. Ler o numero da conta a ser excluida
        Integer numero = Teclado.lerInteger("Informe o número da conta a ser excluída: ");
        // 2. Encontrar a conta na coleção de contas
        // Conta contaEncontrada = null;
        /*
        for (Conta conta : contas){
            if (conta.getNumero().equals(numero)){
                contaEncontrada = conta;
                break;
            }
        } */

        // Usando identidade para encontrar a conta
        Conta contaTemp = new Conta(numero);
        

        // 3. Remover a conta da coleção de contas
        if (contas.contains(contaTemp)){
            contas.remove(contaTemp);
            System.out.println("Conta excluída com sucesso!");
        } else {
            System.out.println("Conta não encontrada.");
        }
    }

    private static void alterar(){
        System.out.println("Alterar conta");
    }

    private static void listar(){
        System.out.println("Listar contas");
        if(contas.isEmpty()){
            System.out.println("Nenhuma conta cadastrada");
        } else {
            for (Conta conta : contas){
                System.out.println(conta);
            }
        }
    }

    private static void criar(){
        System.out.println("Criar conta");
        // 1. Criar a conta
        Conta conta = new Conta();
        // 2. Ler os dados da conta e inicializar os atributos = objeto pronto
        conta.setNumero(Teclado.lerInteger("Informe o número da conta: "));
        conta.setTitular(Teclado.lerString("Informe o nome do titular: "));
        // 3. adicionar a conta da coleção de contas
        contas.add(conta);
    }
}
