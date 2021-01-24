-- 코드를 입력하세요
SELECT  *
FROM    (
    SELECT  date_format(DATETIME, '%H') AS HOUR
          , COUNT(*)                    AS COUNT
    FROM    ANIMAL_OUTS
    GROUP BY date_format(DATETIME, '%H')
    ORDER BY date_format(DATETIME, '%H') ASC
)   AS  A
WHERE   HOUR BETWEEN 9 AND 19
