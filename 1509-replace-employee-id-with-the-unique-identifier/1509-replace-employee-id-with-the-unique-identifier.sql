# Write your MySQL query statement below
SELECT en.unique_id , e.name FROM Employees as e
LEFT  JOIN EmployeeUNI en ON e.id = en.id  ; 
