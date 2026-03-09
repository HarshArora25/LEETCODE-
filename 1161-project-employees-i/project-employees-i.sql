# Write your MySQL query statement below
SELECT project_id, round(AVG(experience_years),2)  as average_years 
FROM Project p1  JOIN Employee P2
ON(p1.employee_id=p2.employee_id )
GROUP BY project_id ;