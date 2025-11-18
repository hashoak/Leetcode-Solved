# Write your MySQL query statement below
select 
    substr(trans_date,1,7) month,
    country, count(trans_date) trans_count,
    sum(state='approved') approved_count,
    sum(amount) trans_total_amount,
    sum(if(state='approved',amount,0))
    approved_total_amount
from transactions
group by substr(trans_date,1,7), country