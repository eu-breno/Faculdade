-- Modelo físico - caso de estudo 2

-- Cria a tabela empresa
CREATE TABLE Empresa (
	id INT PRIMARY KEY,
	razaoSocial VARCHAR(35) NOT NULL,
	endereco VARCHAR(40) NOT NULL,
	cnpj VARCHAR(25) NOT NULL
);
--Criar a tabela funcionario
CREATE TABLE Funcionario (
	matricula INT PRIMARY KEY,
	nome VARCHAR(40) NOT NULL,
	salario NUMERIC(8,2) CHECK(salario >=0),
	cpf VARCHAR(20) NOT NULL,
	telefone VARCHAR(15),
	codEmpresa INT,
	FOREIGN KEY(codEmpresa) REFERENCES Empresa(id)
);
-- Criar a tabela Produto
CREATE TABLE Produto (
	codProduto INT PRIMARY KEY,
	descricao varchar(30) NOT NULL,
	qtdEstoque INT NOT NULL,
	valorUnitario NUMERIC(8,2) NOT NULL,	
	codEmpresa INT,
	FOREIGN KEY(codEmpresa) REFERENCES Empresa(id)
);

--Cria tabela Cliente
CREATE TABLE Cliente (
	nome VARCHAR(40) NOT NULL,
	endereco VARCHAR(60) NOT NULL,
	telefone varchar(15),
	codCliente INT PRIMARY KEY,
	cpf VARCHAR(20) NOT NULL
);

--Criar tabela Pedido(
CREATE TABLE Pedido (
	valorTotal NUMERIC(10,2) NOT NULL,
	dataEntrega date,
	codPedido INT PRIMARY KEY,
	codFuncionario INT,
	codCliente INT,
	FOREIGN KEY(codFuncionario) REFERENCES Funcionario (matricula),
	FOREIGN KEY(codCliente) REFERENCES Cliente (codCliente)
);
-- Cria a tabela local da entrega
CREATE TABLE localEntrega (
	local VARCHAR(30) NOT NULL,
	referencia VARCHAR(20),
	codigo INT PRIMARY KEY,
	codPedido INT,
	FOREIGN KEY(codPedido) REFERENCES Pedido (codPedido)
);

--Cria a tabela itens
CREATE TABLE Itens (
	codigo INT  PRIMARY KEY,
	qtd INT NOT NULL,
	codProduto INT,
	codPedido INT,
	FOREIGN KEY(codProduto) REFERENCES Produto (codProduto),
	FOREIGN KEY(codPedido) REFERENCES Pedido (codPedido)
);
