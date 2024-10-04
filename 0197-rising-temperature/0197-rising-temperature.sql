# Write your MySQL query statement below
select a.id from Weather a
join Weather b
on a.temperature>b.temperature
and datediff(a.recordDate,b.recordDate) = 1;
