# subquery

## in

- null が含まれるとunknownとなるから注意

``` sql
select country_id
from country
where country_id in
(select country_id
 from country
 where country in ('canada', 'mexico'))
```

## all

- null が含まれるとunknownとなるから注意

``` sql
select first_name, last_name
from customer
where customer_id <> add
(select customer_id
 from payment
 where amount = 0);
```
## update

### exists

- update setによって該当項目がない場合、nullが設定されてしまうのを回避したい

``` sql
update customer c
set c.last_update =
  (select max(r.rental_date) from rental r
   where r.customer_id = c.customer_id)
where exists
  (select 1 from rental r
   where r.customer_id = c.customer_id);
```
