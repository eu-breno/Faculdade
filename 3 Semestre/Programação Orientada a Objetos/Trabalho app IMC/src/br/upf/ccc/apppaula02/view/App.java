package br.upf.ccc.apppaula02.view;

import br.upf.ccc.apppaula02.dominio.PessoaIMC;

import javax.swing.JOptionPane;


public class App {
    public static void main(String[] args) {

        String continuar = "s";

        while (continuar.equalsIgnoreCase("s")) {

            PessoaIMC pessoa = new PessoaIMC();

            pessoa.setCpf(JOptionPane.showInputDialog("Digite o CPF:"));

            pessoa.setNome(JOptionPane.showInputDialog("Digite o nome:"));

            pessoa.setPeso(Double.parseDouble(
                    JOptionPane.showInputDialog("Digite o peso (kg):")
            ));

            pessoa.setAltura(Double.parseDouble(
                    JOptionPane.showInputDialog("Digite a altura (m):")
            ));

            double imc = pessoa.calcularIMC();

            String resultado = "--- RESULTADO ---\n" +
                    "Nome: " + pessoa.getNome() + "\n" +
                    "CPF: " + pessoa.getCpf() + "\n" +
                    "IMC: " + String.format("%.2f", imc) + "\n" +
                    "Classificação: " + pessoa.interpretarIMC();

            JOptionPane.showMessageDialog(null, resultado);

            continuar = JOptionPane.showInputDialog("Deseja fazer outro teste? (s/n):");
        }

        JOptionPane.showMessageDialog(null, "Programa encerrado.");
    }
}