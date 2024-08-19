## over

### 四半期ごとにランク付け

``` sql
select quater(payment_date) quater, monthname(payment_date) month_nm,
  sum(amount) monthly_sales,
  rank() over (partition by quater(payment_date)
    order by sum(amount) desc) qtr_sales_rank
from paymet
where year(payment_date)=2005
group by quater(payment_date), monthname(payment_date)
order by 1, month(payment_date)
```
