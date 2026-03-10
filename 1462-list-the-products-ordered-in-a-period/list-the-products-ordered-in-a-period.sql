# Write your MySQL query statement below
-- 00 AND order_date between '2020-01-01' AND '2020-01-31';
SELECT product_name, SUM(unit) AS unit
FROM Products p1
JOIN Orders o1
ON p1.product_id = o1.product_id
WHERE order_date BETWEEN '2020-02-01' AND '2020-02-29'
GROUP BY product_name
HAVING SUM(unit) >= 100;