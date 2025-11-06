-- CASO DE ESTUDO 1 BANCO DE DADOS
--Criar a tabela TEMA

CREATE TABLE Tema(                      -- cria uma nova tabela chamada Tema.
	codigo INT PRIMARY KEY,             -- cria a coluna codigo, do tipo inteiro, e define ela como chave primária, ou seja, identificador único de cada registro
	descricao VARCHAR(20) NOT NULL      -- cria a coluna descricao, que aceita texto de até 20 caracteres e não pode ficar vazia (NOT NULL)
);
-- Cria a tabela de livro
CREATE TABLE Livro(
	isbn INT PRIMARY KEY,
	qtdPaginas INT,
	titulo VARCHAR(50),
	anoPublicacao VARCHAR(4),
	codTema INT NOT NULL,
	FOREIGN KEY (codTema) REFERENCES Tema(codigo)   -- chave estrangeira, tenho que relacionar uma celula de alguma coluna como "codTema", 
                                                    -- e referenciar a uma outra coluna, apontando a tabela e em seguida a coluna de relação
);
--Cria a tabela de Pais
CREATE TABLE Pais(
	sigla VARCHAR(2) PRIMARY KEY,
	nome VARCHAR (30) NOT NULL
);

--Criar a tabela de Autor;
CREATE TABLE Autor(
	codigo INT PRIMARY KEY,
	nome VARCHAR(40) NOT NULL,
	dataNasc date,
	email VARCHAR(50),
	siglaPais VARCHAR(2),
	FOREIGN KEY(siglaPais) REFERENCES Pais(sigla)
);
--Cria a tabela da relação n-n entre Livro e Autor
CREATE TABLE livroAutor(
	codigo INT PRIMARY KEY,
	tipoContribuicao VARCHAR(15) NOT NULL,
	codLivro INT NOT NULL,
	codAutor INT NOT NULL,
	FOREIGN KEY (codLivro) REFERENCES Livro(isbn),
	FOREIGN KEY (codAutor) REFERENCES Autor(codigo)	
);


--- EXEMPLOS de ALTER TABLE

--Vamos adicionar a coluna genero na tabela Autor 
	ALTER TABLE Autor
	ADD COLUMN genero VARCHAR(1) NOT NULL;
	select * from Autor;

--- Vamos remover a coluna Genero da tabela autor
	ALTER TABLE Autor drop column genero;
	select * from Autor;

--- - Garantir que cada e-mail na tabela Autor seja único, adicionando uma restrição UNIQUE. - Adicionando uma constraint
	ALTER TABLE Autor
	ADD CONSTRAINT uk_autor_email UNIQUE (email);


--- EXEMPLO DE DROP TABLE
--- Criamos uma tabela apenas para teste do DROP TABLE 
--- O comando drop table apaga a tabela e todo seu conteudo - Muito Cuidado
	CREATE TABLE teste(
		codigo INT PRIMARY KEY,
		descricao VARCHAR(10) NOT NULL
	);

	DROP TABLE teste;

