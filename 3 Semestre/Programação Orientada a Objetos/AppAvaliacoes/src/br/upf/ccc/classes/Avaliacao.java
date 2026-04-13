/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package br.upf.ccc.classes;

/**
 *
 * @author Breno
 */
public class Avaliacao {

    private String matricula;
    private String nome;
    private Double nota01;
    private Double nota02;
    private Double nota03;
    private Double notaRecuperacao;
    private Double notaExame;

    public String getMatricula() {
        return matricula;
    }

    public void setMatricula(String matricula) {
        if (matricula == null || matricula.isBlank()) {
            throw new IllegalArgumentException("Matricula deve ser informada.");
        }
        this.matricula = matricula.trim();
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        if (nome == null || nome.isBlank()) {
            throw new IllegalArgumentException("Nome deve ser informado.");
        }
        this.nome = nome.trim();
    }

    public Double getNota01() {
        return nota01;
    }

    public void setNota01(Double nota01) {
        validarNota(nota01, "Nota 01");
        this.nota01 = nota01;
    }

    public Double getNota02() {
        return nota02;
    }

    public void setNota02(Double nota02) {
        validarNota(nota02, "Nota 02");
        this.nota02 = nota02;
    }

    public Double getNota03() {
        return nota03;
    }

    public void setNota03(Double nota03) {
        validarNota(nota03, "Nota 03");
        this.nota03 = nota03;
    }

    public Double getNotaRecuperacao() {
        return notaRecuperacao;
    }

    public void setNotaRecuperacao(Double notaRecuperacao) {
        validarNota(notaRecuperacao, "Nota de recuperacao");
        this.notaRecuperacao = notaRecuperacao;
    }

    public Double getNotaExame() {
        return notaExame;
    }

    public void setNotaExame(Double notaExame) {
        validarNota(notaExame, "Nota de exame");
        this.notaExame = notaExame;
    }

    public Double getMedia() {
        int faltantes = 0;
        double soma = 0.0;

        if (nota01 == null) {
            faltantes++;
        } else {
            soma += nota01;
        }

        if (nota02 == null) {
            faltantes++;
        } else {
            soma += nota02;
        }

        if (nota03 == null) {
            faltantes++;
        } else {
            soma += nota03;
        }

        if (faltantes > 0) {
            if (notaRecuperacao == null) {
                throw new IllegalStateException("Faltam notas para gerar a media.");
            }
            soma += notaRecuperacao * faltantes;
        }

        return soma / 3.0;
    }

    public Double getMediaFinal() {
        Double media = getMedia();
        if (notaExame != null) {
            return (media + notaExame) / 2.0;
        }
        return media;
    }

    public String getSituacao() {
        Double mediaFinal = getMediaFinal();
        if (notaExame != null) {
            return mediaFinal >= 5.0 ? "aprovado" : "reprovado";
        }
        return mediaFinal >= 7.0 ? "aprovado" : "em exame";
    }

    private void validarNota(Double nota, String campo) {
        if (nota == null) {
            return;
        }
        if (nota < 0.0 || nota > 10.0) {
            throw new IllegalArgumentException(campo + " deve estar entre 0 e 10.");
        }
    }
}
