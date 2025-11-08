---Exercicios de revisão 

-- 1. Liste a quantidade total de funcionários em cada empresa - Liste o nome da empresa

SELECT e.razaoSocial as empresa, COUNT(f.nome) AS total_funcionarios
FROM Funcionario f
JOIN empresa e ON f.codempresa = e.id
GROUP BY e.razaoSocial;

-- 2. Liste o número de produtos cadastrados por empresa
SELECT e.razaoSocial as empresa, COUNT(p.descricao) AS total_produtos
FROM Produto P
JOIN empresa e ON p.codempresa = e.id
GROUP BY e.razaoSocial;

-- 3. Mostre a quantidade de clientes cadastrados sem  telefone informado 
SELECT COUNT(*) AS clientes_com_telefone
FROM Cliente
WHERE telefone IS NULL;

-- 4.Calcule a soma total de todos os estoques de produtos.
SELECT SUM(qtdEstoque) AS total_itens_estoque
FROM Produto;

-- 5.Mostre o menor valor de pedido registrado.
SELECT MIN(valorTotal) AS menor_pedido
FROM Pedido;

-- 6. Mostre a média do valor total dos pedidos.
SELECT ROUND(AVG(valorTotal), 2) AS media_valor_pedidos
FROM Pedido;

-- 7. Calcule a média do valor total dos pedidos feitos em 2025
SELECT ROUND(AVG(valorTotal), 2) AS media_pedidos_2025
FROM Pedido
WHERE EXTRACT(YEAR FROM dataEntrega) = 2025;

-- 8.Mostre o nome da empresa e o preço médio dos produtos, exibindo apenas empresas com preço médio superior a 100.
SELECT 
    e.razaoSocial AS empresa,
    ROUND(AVG(p.valorUnitario), 2) AS preco_medio
FROM Produto p
JOIN Empresa e ON p.codEmpresa = e.id
GROUP BY e.razaoSocial
HAVING AVG(p.valorUnitario) > 100;


-- 9. Liste o nome do cliente e o total gasto em pedidos,mostrando apenas clientes cujo total gasto seja maior que 1000.
--Ordene pelo total gasto em ordem decrescente
SELECT c.nome AS cliente,SUM(p.valorTotal) AS total_gasto
FROM Cliente c
JOIN Pedido p ON c.codCliente = p.codCliente
GROUP BY c.nome
HAVING SUM(p.valorTotal) > 1000
ORDER BY total_gasto DESC;


--10. Liste o nome das empresas com com mais de 5 produtos.
SELECT e.razaoSocial AS empresa, COUNT(p.codProduto) AS total_produtos
FROM Empresa e
JOIN Produto p ON e.id = p.codEmpresa
GROUP BY e.razaoSocial
HAVING COUNT(p.codProduto) > 5;


--11. Encontrar o valor do pedido mais caro registrado por cada funcionário.

SELECT  f.nome AS NomeFuncionario, MAX(p.valorTotal) AS PedidoMaisCaro
FROM Funcionario f
JOIN Pedido p ON f.matricula = p.codFuncionario
GROUP BY f.nome
ORDER BY PedidoMaisCaro DESC;

	
--12.Usando LEFT JOIN, liste o código do pedido, o nome do cliente e o valor total. 
--Ordene a saída por ordem decrescente de valor total
SELECT 
    p.codPedido,
    c.nome AS cliente,
    p.valorTotal
FROM Pedido p
LEFT JOIN Cliente c ON p.codCliente = c.codCliente
ORDER BY p.valorTotal DESC;


-- 13.Liste o nome do cliente e o total gasto em pedidos,
-- mostrando apenas clientes que tenham realizado pelo menos 2 pedidos.
--ordene por ordem decrescente
SELECT 
    c.nome AS cliente,
    COUNT(p.codPedido) AS qtd_pedidos,
    SUM(p.valorTotal) AS total_gasto
FROM Cliente c
JOIN Pedido p ON c.codCliente = p.codCliente
GROUP BY c.nome
HAVING COUNT(p.codPedido) >= 2;


---14. Mostre o nome da empresa e a média de preços dos produtos,
-- mas exiba apenas empresas cuja média de preços esteja entre 50 e 200.
SELECT 
    e.razaoSocial AS empresa,
    ROUND(AVG(p.valorUnitario), 2) AS preco_medio
FROM Empresa e
JOIN Produto p ON e.id = p.codEmpresa
GROUP BY e.razaoSocial
HAVING AVG(p.valorUnitario) BETWEEN 50 AND 200
ORDER BY preco_medio ASC;