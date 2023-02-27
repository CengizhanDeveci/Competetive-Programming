# Write your MySQL query statement below
SELECT DISTINCT P.email AS Email
FROM Person P, Person P1
WHERE P.email = P1.email AND P.id != P1.id;