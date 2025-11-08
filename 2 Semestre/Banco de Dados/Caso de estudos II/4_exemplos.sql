--Alguns exemplos
--Listar todos os funcionários e, para aqueles que realizaram pedidos, mostrar o código do pedido.
--Uso de left, pode ter funcionarios que não realizaram nenhum pedido
SELECT
    f.nome AS NomeFuncionario,
    p.codPedido AS CodigoPedido
FROM
    Funcionario f
LEFT JOIN
    Pedido p ON f.matricula = p.codFuncionario;
	
--Listar todos os produtos e verificar se já foram vendidos em algum pedido
SELECT
    p.descricao AS Produto,
    p.valorUnitario,
    i.codPedido
FROM
    Itens i
RIGHT JOIN
    Produto p ON p.codProduto = i.codProduto;
	

-- COUNT: Contar o número total de clientes cadastrados.
SELECT COUNT(*) AS TotalDeClientes
FROM Cliente;
SQL

-- SUM: Calcular o valor total de todos os pedidos realizados.
SELECT SUM(valorTotal) AS SomaTotalDosPedidos
FROM Pedido;

-- AVG: Obter a média salarial dos funcionários.
SELECT AVG(salario) AS MediaSalarial
FROM Funcionario;

-- Mostre o salário médio, o maior e o menor salário de todos os funcionários
SELECT 
    ROUND(AVG(salario), 2) AS media_salarial,
    MAX(salario) AS maior_salario,
    MIN(salario) AS menor_salario
FROM Funcionario;

-- Exiba o código da empresa e o estoque total de produtos, mostrando apenas empresas com mais de 500 itens em estoque
SELECT codEmpresa, SUM(qtdEstoque) AS total_estoque
FROM Produto
GROUP BY codEmpresa
HAVING SUM(qtdEstoque) > 500;


-- Mostre o código do cliente e a média do valor de seus pedidos, apenas para clientes cuja média de pedidos seja maior que 500
SELECT codCliente, ROUND(AVG(valorTotal), 2) AS media_pedidos
FROM Pedido
GROUP BY codCliente
HAVING AVG(valorTotal) > 500;


-- View 1: Visão de funcionários e empresas
CREATE VIEW vw_funcionarios_empresas AS
SELECT 
    f.matricula,
    f.nome AS funcionario,
    f.salario,
    e.razaoSocial AS empresa
FROM Funcionario f
JOIN Empresa e ON f.codEmpresa = e.id;

-- View 2: Visão de pedidos com clientes
CREATE VIEW vw_pedidos_clientes AS
SELECT 
    p.codPedido,
    p.valorTotal,
    p.dataEntrega,
    c.nome AS cliente
FROM Pedido p
JOIN Cliente c ON p.codCliente = c.codCliente;