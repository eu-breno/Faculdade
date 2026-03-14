import java.util.Scanner;

public class AppScanner {
    // criar uma conta e ler dados do usuário

    public static void main(String[] args) {
        Conta c = new Conta();
        // para ler os dados, deve se instanciar um objeto scanner de input
        Scanner entrada = new Scanner(System.in);
        System.out.print("Número: ");
        c.numero = entrada.nextInt();
        System.out.print("Titular: ");
        c.titular = entrada.next();
        c.saldo = 0f;

        System.out.print("Conta lida: ");
        System.out.println(c.numero + " " + c.titular);

        entrada.close();
    }
}
