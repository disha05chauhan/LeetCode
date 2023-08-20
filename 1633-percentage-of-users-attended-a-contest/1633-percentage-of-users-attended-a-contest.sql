WITH ContestCounts AS (
    SELECT contest_id, COUNT(DISTINCT user_id) AS registered_users
    FROM Register
    GROUP BY contest_id
)

, TotalUsers AS (
    SELECT COUNT(*) AS total_users
    FROM Users
)

SELECT c.contest_id,
       ROUND((CAST(c.registered_users AS FLOAT) / t.total_users) * 100, 2) AS percentage
FROM ContestCounts c
CROSS JOIN TotalUsers t
ORDER BY percentage DESC, c.contest_id ASC;
