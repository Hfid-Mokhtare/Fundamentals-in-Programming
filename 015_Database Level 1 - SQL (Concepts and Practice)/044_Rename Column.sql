-- to change the name of a column in sql server you have to use a built in function : 
exec sp_rename 'employes.gender', 'koko','column';

-- in mysql : 
alter table employes
rename column gendor to gerder;
