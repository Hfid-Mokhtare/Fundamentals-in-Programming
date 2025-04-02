-- to delete a table : 
drop table employes1;

-- to check if exists : 
if exists(select * from sys.tables where name='Table_1')
begin
	drop table Table_1;
end

-- in MySql and sql : 
drop table if exists employes1;
