
-- select distinct salary as SecondHighestSalary 
-- from employee
-- order by salary desc
-- Limit 1 offset 1;  
-- isse null wale cases handle nhi hote

select (
    select distinct salary 
    from employee
    order by salary desc
    limit 1 offset 1 
) as SecondHighestSalary
# offset mtlb hua kitni rows skip krni h
#nth highest salary ke liye offset n-1