# Write your MySQL query statement below
SELECT name ,bonus FROM Employee  e1  LEFT JOIN Bonus  e2 
ON (e1.empId=e2.empId) where bonus<1000 or bonus is NULL;