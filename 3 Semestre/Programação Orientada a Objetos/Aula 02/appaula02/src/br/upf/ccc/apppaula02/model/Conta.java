package br.upf.ccc.apppaula02.model;

public class Conta {
    // Aqui definimos os atributos
    private Integer numero;
    private String titular;
    private Float saldo;

    // Aqui definimos o construtor
    public Conta(){
        saldo = 0.0f;
    }

    public Conta(Integer numero, String titular){
        this.numero = numero;
        this.titular = titular;
        saldo = 0.0f;
    }
    

    public Conta(Integer numero) {
        this.numero = numero;
        saldo = 0.0f;
    }

    // Aqui definimos os métodos
    public void depositar(Float valor){
        saldo += valor;
    }

    public void sacar(Float valor){
        saldo -= valor;
    }
    
    public void transferir(Float valor, Conta destino){
        saldo -= valor;
        destino.saldo += valor;
    }

    // gettin and setters
    public Integer getNumero() {
        return numero;
    }

    public void setNumero(Integer numero) {
        this.numero = numero;
    }

    public String getTitular() {
        return titular;
    }

    public void setTitular(String titular) {
        this.titular = titular;
    }

    public Float getSaldo() {
        return saldo;
    }

    public void setSaldo(Float saldo) {
        this.saldo = saldo;
    }

    
}
