# Write your MySQL query statement below

SELECT u.name, SUM(amount) as balance
FROM Transactions t
INNER JOIN users u
on t.account = u.account
GROUP BY u.name
HAVING SUM(amount)>10000