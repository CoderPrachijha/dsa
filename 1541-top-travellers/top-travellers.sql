# Write your MySQL query statement below


select name,IFNULL(SUM(r.distance), 0)as travelled_distance
from Users as u
left join Rides as r
on u.id=r.user_id
group by u.id, u.name
ORDER BY travelled_distance DESC ,u.name ASC;
