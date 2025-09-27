# Write your MySQL query statement below
SELECT email as Email  FROM Person 
Group by Email 
Having COUNT(Email) != 1 ;
