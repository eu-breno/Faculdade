import javax.swing.JOptionPane;

public class AppDesktop {
    public static void main(String[] args) {
        Conta c = new Conta();
        c.saldo = 0f;
        String entrada = JOptionPane.showInputDialog("Informe o numero: ");

        c.numero = Integer.valueOf(entrada);

        entrada = JOptionPane.showInputDialog("Informe o nome: ");
        c.titular = entrada;

        System.out.print("Conta lida: ");
        System.out.println(c.numero + " " + c.titular);
    }
}
