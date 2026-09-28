# Write your MySQL query statement below
SELECT DISTINCT P1.email AS Email FROM Person as P1 INNER JOIN Person as P2 ON P1.email=P2.email AND P1.id!=P2.id;