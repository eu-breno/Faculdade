-- 1) Liste o nome do funcionário e a razão social da empresa em que ele trabalha.
SELECT f.nome, e.razaoSocial
FROM Funcionario f
JOIN Empresa e ON f.codEmpresa = e.id;


-- 2) Liste os pedidos (código e valor total) junto com o nome do cliente que os realizou.
SELECT p.codPedido, p.valorTotal, c.nome AS cliente
FROM Pedido p
JOIN Cliente c ON p.codCliente = c.codCliente;


-- 3) Liste os produtos vendidos em cada pedido (código do pedido, nome do cliente, descrição do produto e quantidade).
SELECT p.codPedido, c.nome AS cliente, pr.descricao AS produto, i.qtd
FROM Pedido p
JOIN Cliente c ON p.codCliente = c.codCliente
JOIN Itens i ON p.codPedido = i.codPedido
JOIN Produto pr ON i.codProduto = pr.codProduto;


-- 4) Liste o nome do funcionário responsável por cada pedido e o nome do cliente que o realizou.
SELECT p.codPedido, f.nome AS funcionario, c.nome AS cliente
FROM Pedido p
JOIN Funcionario f ON p.codFuncionario = f.matricula
JOIN Cliente c ON p.codCliente = c.codCliente;


-- 5) Liste todos os locais de entrega, mostrando o código do pedido, o cliente e o local de entrega.
SELECT p.codPedido, c.nome AS cliente, l.local, l.referencia
FROM Pedido p
JOIN Cliente c ON p.codCliente = c.codCliente
JOIN localEntrega l ON p.codPedido = l.codPedido;


-- 6) Liste cada empresa com seus respectivos produtos (razão social e descrição do produto).
SELECT e.razaoSocial, pr.descricao AS produto
FROM Empresa e
JOIN Produto pr ON e.id = pr.codEmpresa;


-- 7) Liste os pedidos (código e valor total) junto com o nome do funcionário e da empresa onde ele trabalha.
SELECT p.codPedido, p.valorTotal, f.nome AS funcionario, e.razaoSocial AS empresa
FROM Pedido p
JOIN Funcionario f ON p.codFuncionario = f.matricula
JOIN Empresa e ON f.codEmpresa = e.id;


-- 8) Liste os pedidos (código, cliente, valor total) e os produtos que foram incluídos nesses pedidos.
SELECT p.codPedido, c.nome AS cliente, p.valorTotal, pr.descricao AS produto, i.qtd
FROM Pedido p
JOIN Cliente c ON p.codCliente = c.codCliente
JOIN Itens i ON p.codPedido = i.codPedido
JOIN Produto pr ON i.codProduto = pr.codProduto;


-- 9) Mostre o nome do cliente, o código do pedido e a data de entrega de todos os pedidos que possuem local de entrega registrado.
SELECT c.nome AS cliente, p.codPedido, p.dataEntrega, l.local
FROM Pedido p
JOIN Cliente c ON p.codCliente = c.codCliente
JOIN localEntrega l ON p.codPedido = l.codPedido;


-- 10) Liste os funcionários que já realizaram pedidos, mostrando também o código do pedido e o cliente atendido.
SELECT f.nome AS funcionario, p.codPedido, c.nome AS cliente
FROM Funcionario f
JOIN Pedido p ON f.matricula = p.codFuncionario
JOIN Cliente c ON p.codCliente = c.codCliente;