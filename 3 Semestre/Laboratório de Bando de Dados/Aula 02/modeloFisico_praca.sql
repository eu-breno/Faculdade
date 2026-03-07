CREATE TABLE PROPRIETARIO (
    id_proprietario NUMBER(10) PRIMARY KEY,
    nome            VARCHAR2(50) NOT NULL,
    cpf_cnpj        VARCHAR2(18) UNIQUE NOT NULL,
    email           VARCHAR2(80)
);

CREATE TABLE VEICULO (
    placa           VARCHAR2(10) PRIMARY KEY,
    tipo            VARCHAR2(20) CHECK (tipo IN ('carro','moto','caminhao','onibus')),
    categoria_eixo  NUMBER(2) NOT NULL,
    tag_ativa       CHAR(1) CHECK (tag_ativa IN ('S','N')),
    id_proprietario NUMBER(10) NOT NULL,

    CONSTRAINT fk_veiculo_proprietario
        FOREIGN KEY (id_proprietario)
        REFERENCES PROPRIETARIO(id_proprietario)
);


CREATE TABLE PRACA_PEDAGIO (
    id_praca NUMBER(10) PRIMARY KEY,
    nome     VARCHAR2(50) NOT NULL,
    rodovia  VARCHAR2(50) NOT NULL,
    km       NUMBER(6,2),
    cidade   VARCHAR2(80),
    estado   CHAR(2)
);


CREATE TABLE TARIFA (
    id_tarifa      NUMBER(10) PRIMARY KEY,
    categoria_eixo NUMBER(2) NOT NULL,
    valor          NUMBER(10,2) NOT NULL,
    data_inicio    DATE DEFAULT CURRENT_DATE,
    data_fim       DATE
);

CREATE TABLE CABINE (
    id_cabine NUMBER(10) PRIMARY KEY,
    tipo      VARCHAR2(20) CHECK (tipo IN ('manual','automatica','tag')),
    status    VARCHAR2(10) CHECK (status IN ('ativa','inativa')),
    id_praca  NUMBER(10) NOT NULL,

    CONSTRAINT fk_cabine_praca
        FOREIGN KEY (id_praca)
        REFERENCES PRACA_PEDAGIO(id_praca)
);


CREATE TABLE OPERADOR (
    id_operador NUMBER(10) PRIMARY KEY,
    nome        VARCHAR2(50) NOT NULL,
    cpf         VARCHAR2(14) UNIQUE NOT NULL,
    turno       VARCHAR2(20),
    id_cabine   NUMBER(10) NOT NULL,

    CONSTRAINT fk_operador_cabine
        FOREIGN KEY (id_cabine)
        REFERENCES CABINE(id_cabine)
);


CREATE TABLE PASSAGEM (
    id_passagem NUMBER(10) PRIMARY KEY,
    data_hora   DATE NOT NULL,
    placa       VARCHAR2(10) NOT NULL,
    id_cabine   NUMBER(10) NOT NULL,
    id_tarifa   NUMBER(10) NOT NULL,

    CONSTRAINT fk_passagem_veiculo
        FOREIGN KEY (placa)
        REFERENCES VEICULO(placa),

    CONSTRAINT fk_passagem_cabine
        FOREIGN KEY (id_cabine)
        REFERENCES CABINE(id_cabine),

    CONSTRAINT fk_passagem_tarifa
        FOREIGN KEY (id_tarifa)
        REFERENCES TARIFA(id_tarifa)
);

CREATE TABLE PAGAMENTO (
    id_pagamento  NUMBER(10) PRIMARY KEY,
    forma_pagamento VARCHAR2(20) 
        CHECK (forma_pagamento IN ('dinheiro','cartao','pix','tag')),
    valor_pago    NUMBER(10,2) NOT NULL,
    data_hora     DATE NOT NULL,
    id_passagem   NUMBER(10) UNIQUE NOT NULL,

    CONSTRAINT fk_pagamento_passagem
        FOREIGN KEY (id_passagem)
        REFERENCES PASSAGEM(id_passagem)
);
