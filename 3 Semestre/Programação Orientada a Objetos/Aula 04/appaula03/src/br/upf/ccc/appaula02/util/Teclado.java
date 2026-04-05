package br.upf.ccc.appaula02.util;

public class Teclado {

    /**
     * Método para ler um número inteiro do console
     * @param É a mensagem a ser exibida para o usuário
     * @return O número inteiro lido
     */
    public static Integer lerInteger(String mensagem) {    
       System.out.print(mensagem);
       return Integer.parseInt(System.console().readLine()); 
    }

    /**
     * Método para ler um número float do console
     * @param mensagem
     * @return
     */
    public static Float lerFloat(String mensagem) {    
       System.out.print(mensagem);
       return Float.parseFloat(System.console().readLine());
    }  

    public static String lerString(String mensagem) {    
       System.out.print(mensagem);
       return System.console().readLine();
    }  

    


}
