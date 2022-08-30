CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
DECLARE M INT;
SET M = N-1;
  RETURN (
      # Write your MySQL query statement below.
       SELECT DISTINCT salary as geNthHighestSalary  
      FROM Employee order by salary desc limit M,1
  );
END