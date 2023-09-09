WITH firstyearsales AS (
    SELECT s.product_id, s.year as first_year, s.quantity, s.price
    FROM Sales s
    JOIN (
        SELECT product_id, MIN(year) AS min_year
        FROM Sales
        GROUP BY product_id
    ) t
    ON s.product_id = t.product_id AND s.year = t.min_year
)
SELECT * FROM firstyearsales;
