-- to do comantes in sql use : --

-- to create database if not exists : 

  if not exists(select * from sys.databases where name='koko4')
  begin
	  create database koko4;
  end

-- in MySql : 

  create databade if not exists koko4;
