# Write your MySQL query statement below

SELECT
  score,
  (SELECT count(distinct score) FROM Scores WHERE score >= s.score) as `rank`
FROM Scores as s
ORDER BY score desc;