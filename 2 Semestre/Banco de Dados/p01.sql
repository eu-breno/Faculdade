-- CARGA DOS DADOS

--inserção na tabela tema:
INSERT INTO Tema(codigo,descricao) VALUES(1,'Fantasia');
INSERT INTO Tema VALUES(2,'Ficção Científica');
INSERT INTO Tema(codigo,descricao) VALUES(3,'Romance');
INSERT INTO Tema(codigo,descricao) VALUES(4,'Mistério');
INSERT INTO Tema(codigo,descricao) VALUES(5,'Realismo');

select * from Tema;

-- carga na tabela pais

INSERT INTO Pais VALUES ('BR','Brasil');  -- Funciona sem informar os atributos desde que você adicione todos e siga a ordem de criação
INSERT INTO Pais(sigla,nome) VALUES ('GB','Reino Unido');
INSERT INTO Pais(sigla,nome) VALUES ('US','Estados Unidos');
INSERT INTO Pais(sigla,nome) VALUES ('PT','Portugal');
INSERT INTO Pais(sigla,nome) VALUES ('CO','Colômbia');

select * from Pais;

--carga na tabela Autor 
---data ('YYYY-MM-DD')
INSERT INTO Autor(codigo,nome,dataNasc,email,codPais) 
	VALUES(101,'J.K. Rowling','1965-07-31','jk@email.com','GB');

INSERT INTO Autor(codigo,nome,dataNasc,codPais) 
	VALUES(102,'Isaac Asimov','1920-01-02','US');

INSERT INTO Autor(codigo,nome,dataNasc,email,codPais) 
	VALUES(103,'Machado de Assis','1839-06-21','ms@email.com','BR');

INSERT INTO Autor(codigo,nome,dataNasc,codPais) 
	VALUES(104,'Agatha Christie','1890-09-15','GB');

select * from Autor;

-- Carga de dados na tabela livro

INSERT INTO Livro(isbn,qtdPaginas,titulo,anoPublicacao,codTema)
            VALUES(1001,250,'Harry Potter e a Pedra Filosofal','1997',1);

INSERT INTO Livro(isbn,qtdPaginas,titulo,anoPublicacao,codTema)
            VALUES(1002,224,'Eu Robô','1950',2);
			
INSERT INTO Livro(isbn,qtdPaginas,titulo,anoPublicacao,codTema)
            VALUES(1003,208,'Dom Casmurro','1899',5);

INSERT INTO Livro(isbn,qtdPaginas,titulo,anoPublicacao,codTema)
            VALUES(1004,212,'O Assassinato no Expresso do Oriente','1934',4);

INSERT INTO Livro(isbn,qtdPaginas,titulo,anoPublicacao,codTema)
            VALUES(1005,312,'Ensaio sobre a Cegueira','1995',3);

select * from Livro;

-- carga dos dados na tabela AutorLivro

INSERT INTO AutorLivro(codigo,codAutor,codLivro,tipoContribuicao)
            VALUES (201,101,1001,'Principal');

INSERT INTO AutorLivro(codigo,codAutor,codLivro,tipoContribuicao)
            VALUES (202,102,1002,'Principal');

INSERT INTO AutorLivro(codigo,codAutor,codLivro,tipoContribuicao)
            VALUES (203,103,1003,'Principal');

INSERT INTO AutorLivro(codigo,codAutor,codLivro,tipoContribuicao)
            VALUES (204,103,1001,'Coautor');

select * from AutorLivro;



--- Exemplos de update
--atualizar o email do autor Machado de Assis
UPDATE Autor 
SET email = 'machado@email.com'
WHERE codigo = 103; 

--Atualizar o ano do Livro Dom Casmurro
UPDATE Livro
SET anoPublicacao = '1900'
WHERE isbn = 1003;

select * from Autor;

--Adicionar email ao autor que anteriormente estava sem
UPDATE Autor
SET EMAIL = 'asimov@email.com'
WHERE codigo = 102;


---- Exemplos de DELETE
--DEletar o Livro Ensaio sobre a Cegueira de ISBN 1005
DELETE FROM Livro
WHERE isbn = 1005;

---*** UPDATE E DELETE JAMAIS SEM A CLAUSULA WHERE!!!! *****