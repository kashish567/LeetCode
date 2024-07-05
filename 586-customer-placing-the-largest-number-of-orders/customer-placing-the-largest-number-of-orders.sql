# Write your MySQL query statement below
WITH cte as
(SELECT customer_number,COUNT(order_number) as NumOrd
FROM Orders
GROUP BY customer_number
)

SELECT customer_number 
FROM cte
WHERE NumOrd = (SELECT Max(NumOrd)FROM cte)