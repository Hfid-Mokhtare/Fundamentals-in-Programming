-- if you have atable with an identity counter and you want to delte all records : 

-- this will delete all rows but will not reset the identity counter
delete from EM1;

--this will delete all rows and reset the identity counter
truncate table EM1;

