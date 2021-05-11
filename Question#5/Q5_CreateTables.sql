-- Create Tables
CREATE TABLE Students (ID integer primary key, Name varchar(20), Value integer );
CREATE TABLE Notes (Grade integer primary key, Min_Value integer , Max_Value integer );

-- Create elements of both tables
INSERT INTO Notes 
    (Grade, Min_Value, Max_Value) 
VALUES
    ('1' , '0' , '9'),
    ('2' , '10' , '19'),
    ('3' , '20' , '29'),
    ('4' , '30' , '39'),
    ('5' , '40' , '49'),
    ('6' , '50' , '59'),
    ('7' , '60' , '69'),
    ('8' , '70' , '79'),
    ('9' , '80' , '89'),
    ('10', '90' , '100');

INSERT INTO Students 
    (Name, Value) 
VALUES
    ('Julia',81),
    ('Carol',68),
    ('Maria',99),
    ('Andreia',78),
    ('Jaqueline',63),
    ('Marcela',88);
