SELECT p1.product_id, product_name
FROM Product p1
JOIN Sales p2
ON p1.product_id = p2.product_id
GROUP BY p1.product_id, product_name
HAVING MIN(sale_date) >= '2019-01-01'
AND MAX(sale_date) <= '2019-03-31';