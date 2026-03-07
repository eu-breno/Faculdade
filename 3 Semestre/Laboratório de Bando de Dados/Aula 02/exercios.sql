-- EXERCICIOS
-- 1 - Listar todas PASSAGENS do mes de fev
SELECT *
FROM passagem
WHERE extract(month from data_hora) = 02;

-- 2 - Listar a placa dos VEICULOS - tipo carro com tag ativa
SELECT placa
FROM veiculo
WHERE tipo = 'carro' and UPPER(tag_ativa) = 's';

-- 3 - Listar o nome e a rodovia de todas as praça de pedagio entre intervalo dos kms 50 e 150
SELECT nome, rodovia
FROM PRACA_PEDAGIO
WHERE km BETWEEN 50 AND 150;

-- 4 - Listar todos pagamentos com a forma cartao e pix
SELECT * 
FROM PAGAMENTO
WHERE forma_pagamento = 'cartao' or forma_pagamento = 'pix';

-- 5 - Listar todos os veiculos do tipo carro que possuem tag ativa 
SELECT *
FROM veiculo
WHERE tipo = 'carro' and tag_ativa = 'S';

-- 6 - listar tarifas cujo valor esteja entre 5 e 25
SELECT *
FROM TARIFA
WHERE valor BETWEEN 5 and 25;

-- 7 - listar a quantidade e o somatorio de todas tarifas
SELECT count(id_tarifa), SUM(valor)
FROM TARIFA;