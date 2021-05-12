-- Create Tables
CREATE TABLE dogs (ID integer NOT NULL primary key, Name varchar(50) );
CREATE TABLE cats (ID integer NOT NULL primary key, Name varchar(50) );

-- Create elements of both tables
INSERT INTO dogs 
    (Name) 
VALUES
    ('Mandela' ),
	('Branco' ),
    ('Dedé' ),
    ('Toquinho' ),
    ('Monica' ),
    ('Mancha' ),
    ('Mel' ),
    ('Didi' ),
    ('Miojo' );
    
INSERT INTO cats 
    (Name) 
VALUES
    ('Branco' ),
	('Léia' ),
    ('Gatalunia' ),
    ('Mel' ),
    ('Monica' ),
    ('Ágata' ),
    ('MelMel1' );