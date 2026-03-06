# Write your MySQL query statement below
SELECT e1.name as Customers from Customers as e1 left JOIN Orders as o1
ON e1.id=o1.customerId
where o1.customerID IS NULL;