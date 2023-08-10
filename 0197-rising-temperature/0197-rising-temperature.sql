# Write your MySQL query statement below
SELECT a.id AS Id
FROM Weather a
JOIN Weather b ON a.recordDate = DATE_ADD(b.recordDate, INTERVAL 1 DAY)
WHERE a.temperature > b.temperature;
