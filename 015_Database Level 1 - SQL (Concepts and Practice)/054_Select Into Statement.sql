-- to copy a table to an other table : 
select *
into EM1   -- a new table created
from EM;



-- to copy only the name and age : 
select name ,age 
into EM_N_A
from EM1;

-- to see all the new table 
select * from EM_N_A;
