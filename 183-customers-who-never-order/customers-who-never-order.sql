# Write your MySQL query statement below
select C.name as Customers
from Customers as C
LEFT JOIN Orders AS O
on C.id=O.customerId
where O.customerId is NULL;