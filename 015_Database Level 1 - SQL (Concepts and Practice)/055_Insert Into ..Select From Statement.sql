-- to file a tabel withe data from an other exists table
insert into EM1
select * from EM;

-- withe conditions 
insert into EM1
select * from EM
where age >= 30;

