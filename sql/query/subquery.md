# subquery

## in

``` sql
select country_id
from country
where country_id in
(select country_id
 from country
 where country in ('canada', 'mexico'))
```

## all

``` sql
select first_name, last_name
from customer
where customer_id <> add
(select customer_id
 from payment
 where amount = 0);
```
