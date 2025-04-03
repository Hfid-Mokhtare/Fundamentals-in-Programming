-- to make a Differential Backup : 
BACKUP DATABASE MyDatabase1
TO DISK = 'C:\MyDatabase1_backup.bak'
WITH DIFFERENTIAL;
