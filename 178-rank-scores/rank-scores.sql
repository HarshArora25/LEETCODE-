# Write your MySQL query statement below
SELECT s1.score ,(
    SELECT COUNT(distinct s2.score) FROM Scores s2
    where s2.score>s1.score 
) +1 as 'rank' 
FROM Scores s1
ORDER BY score DESC;