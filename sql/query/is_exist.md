# 存在確認

``` sql
select a.first_name, a.last_name,
  case
    when exists
      (select 1 from film_actor fa
         inner join film f on fa.film_id = f.film_id
       where fa.actor_id = a.actor_id and f.rating = 'G') then 'Y'
    else 'N'
  end g_actor
from actor a
where a.last_name like 'S%' or a.first_name like 'S%';
```
