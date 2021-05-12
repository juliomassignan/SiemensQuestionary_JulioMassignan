# Siemens Questionary Julio Massignan

# Question #5

Files:

Q5_CreateTables.sql: SQL script to generate example tables for the question
Q5_Query.sql: SQL script with the query

Solution Description:

Two scripts were created in this question:

1. Q5_CreateTables.sql: First, a script to create the tables, with the example values provided.

2. Q5_Query.sql: Second, a script with the SQL query to provide the report of grades. Basically, the query three main steps:
	1st: a SELECT statement with the columns intended for the report, with one column based on a conditional selection with the statement CASE
	2nd: the defition of tables that will be queried inside the FROM statement. In this case two tables are joined based on the correspondence of the values  from two columns
	3rd: a ORDER BY statement with multiple criteria in a sequence, with two of them conditioned to the grades of each student.

# link: https://sqliteonline.com/#fiddle=4ef0c677953e395b47d7be9d7e61eaf6ef9173629ffca229a40967d159119376

If tables are loaded automatically, then just run the query. Otherwise run the CreateTables.sql
