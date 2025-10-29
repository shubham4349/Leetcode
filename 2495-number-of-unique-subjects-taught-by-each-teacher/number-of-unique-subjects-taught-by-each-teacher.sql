# Write your MySQL query statement below
select teacher_id,count(distinct subject_id) as cnt 
from teacher 
group by teacher_id
-- // teacher 1-> 2 unique subj padhta h
-- // teacher 2-> 4 unique
