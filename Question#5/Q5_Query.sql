-- Select Three columns: Name (with a conditional statement), Name of student, and grade from according to notes
SELECT CASE WHEN Notes.Grade < 8 THEN 'NULL' ELSE Students.Name END AS Name, Grade, Value
-- Table join from studens and notes according to 
FROM ( Students JOIN Notes ON (Students.Value >= Notes.Min_Value AND Students.Value <= Notes.Max_Value) )
--Final ordering by multiple criteria and with inner conditions
ORDER BY Grade DESC,
	CASE
        WHEN Grade >= 8 THEN Name
    END DESC,
    CASE
        WHEN Grade < 8 THEN Value
    END ASC


