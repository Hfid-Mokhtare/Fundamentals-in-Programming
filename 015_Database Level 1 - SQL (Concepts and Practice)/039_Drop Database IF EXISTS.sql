-- to check if the database is exists befour delete it : 
if exists(select * from sys.databases where name='db1')
begin
	drop database db1;
end;

-- in mysql : 
DROP DATABASE IF EXISTS db1;
