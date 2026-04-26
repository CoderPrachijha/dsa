# Write your MySQL query statement below
select name, b.bonus
from Employee as e
LEFT join Bonus as b
on e.empId=b.empId
where b.bonus< 1000 OR b.bonus IS NULL;;
