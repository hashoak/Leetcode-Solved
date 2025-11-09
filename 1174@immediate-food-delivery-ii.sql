# Write your MySQL query statement below
select round(avg(immediate)*100,2) immediate_percentage
from (
    select customer_id,
    row_number() over (partition by customer_id order by order_date) rnk,
    order_date=customer_pref_delivery_date immediate
    from delivery
) d
where rnk=1