# Write your MySQL query statement below
select a.name ,b.bonus from Employee a left join Bonus b on a.EmpId=b.empId where b.bonus<1000 or bonus is null;