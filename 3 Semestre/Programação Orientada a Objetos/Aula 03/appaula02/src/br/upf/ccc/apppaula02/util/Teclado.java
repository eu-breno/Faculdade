package br.upf.ccc.apppaula02.util;

public class Teclado {
    /*
     Método para ler um inteiro do controle
     @param é a mensagem a ser exibida para o usuário    
     @return o número inteiro lido
     */

    public static Integer lerInteger(String mensagem){
        System.out.println(mensagem);
        return Integer.parseInt(System.console().readLine());
    }

    public static Float lerFloat(String mensagem){
        System.out.println(mensagem);
        return Float.parseFloat(System.console().readLine());
    }

    public static String lerString(String mensagem){
        System.out.println(mensagem);
        return (System.console().readLine());
    }
}
