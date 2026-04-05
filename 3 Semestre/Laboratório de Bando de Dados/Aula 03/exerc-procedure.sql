CREATE or REPLACE PROCEDURE p_exl(
  varId NUMBER,
  varNome VARCHAR,
  varC_C PROPRIETARIO.nome%TYPE,
  varEmail VARCHAR2) 
IS
  varX NUMBER;
BEGIN
  SELECT COUNT (id_prorprietario) INTO varX FROM PROPRIETARIO
  WHERE id_proprietario = varId;
  IF (varX = 1) THEN
    raise_application_error(-20001, 'Id já em uso!');
  END IF;
  
  INSERT INTO PROPRIETARIO VALUES(varId, varNome, varC_C, varEmail);
END p_exl;


-- excecutando o procedimento
EXEC p_exl(50, 'Moises', '4545', 'ms@upf.br');

SELECT * FROM PROPRIETARIO;

-- 2 faça um procedure para att status da cabine
-- verificar em uma exception se de fato esta sendo mudado o status
CREATE or REPLACE PROCEDURE p_ex2(  -- o nome do processo é p_ex2
  varId NUMBER,
  varStatus VARCHAR
) IS
  varDescricao VARCHAR(10);
BEGIN 
  SELECT status INTO varDescricao
  FROM Cabine WHERE id_cabine = varId;
  IF(varDescricao = varStatus) THEN
    RAISE e1;
  END IF;
  UPDATE Cabine
  SET status = varStatus
  WHERE id_cabine = varId;

  EXCEPTION 
    WHEN e1 THEN
      raise_application_error(-20001, 'Mesmo status!');
END p_ex2;

EXEC p_ex2(1, 'inativo');
SELECT * FROM CABINE;


-- 3 faça um procedure com join para listar as passagens
-- com dados do veiculo e proprietario
CREATE or REPLACE PROCEDURE p_ex3 IS
BEGIN
  FOR reg IN (
    SELECT v.placa, p.nome AS proprietario
    FROM veiculo v 
    INNER JOIN passagem pas ON v.placa = pas.placa
    INNER JOIN proprietario p ON p.id_proprietario = v.id_proprietario
  )
  LOOP
    DBMS_OUTPUT.PUT_LINE(
      ' | Placa: ' || reg.placa || 
      ' | Proprietário: ' || reg.proprietario
    );
  END LOOP;
END;
      
      SET SERVEROUTPUT ON;
      EXEC p_ex3()


-- Exemplo de uma função
-- 1 Função que passa o id da praça de pedagio para retornar o nome da praça
CREATE or REPLACE FUNCTION f_exemplo1 (varId NUMBER)
    RETURN VARCHAR IS
    varResult VARCHAR2(30);
    
BEGIN 
  SELECT nome 
  INTO carResult
  FROM praca
  WHERE id_praca = varId;
RETURN varResult;
END;

-- excecutando uma função
SELECT f_exemplo(4) FROM dual;