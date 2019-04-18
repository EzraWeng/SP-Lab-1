# SP-Lab-1
This program aims to implement a employee database application. To build an executable, copy and paste all the source files, head files and input files to a new project directory in an IDE you like. (Here I used CLion) 
![image](https://github.com/EzraWeng/SP-Lab-1/blob/master/image/1.png)

Before the testing, the program needs to load the employee data stored in input.txt.
In CLion, click “Run”

![image](https://github.com/EzraWeng/SP-Lab-1/blob/master/image/2.png)

Choose “Run” in the sub menu, and click “0. Edit Configurations”

![image](https://github.com/EzraWeng/SP-Lab-1/blob/master/image/3.png)

Enter “../input.txt” in “Program arguments”, apply and run

![image](https://github.com/EzraWeng/SP-Lab-1/blob/master/image/4.png)

A new command line window will appear, to test the printing function, input 1 and enter, the program will print all the records in the database.

![image](https://github.com/EzraWeng/SP-Lab-1/blob/master/image/5.png)

To test searching by ID function, input 2 and enter, the program will require you to enter a 6 digit employee id

![image](https://github.com/EzraWeng/SP-Lab-1/blob/master/image/6.png)

If the employee id you entered is not founded in the database(i.e. 123456), the program will return “Employee with id 123456 not found in DB”

To test searching by Last Name function, input 3 and enter, the program will require you to enter a last name (without extra spaces)

![image](https://github.com/EzraWeng/SP-Lab-1/blob/master/image/7.png)

After you input the last name and enter, if the record is founded in database(i.e. James), the record of this employee will be printed

![image](https://github.com/EzraWeng/SP-Lab-1/blob/master/image/8.png)

If the last name is not founded in database(i.e. Weng), program will return “Employee with last name Weng not found in DB”

![image](https://github.com/EzraWeng/SP-Lab-1/blob/master/image/9.png)

To test employee adding function, input 4 and enter, the program will require you to input the first name, last name and salary of the new employee, press enter after the input, the program will ask you to confirm this adding, enter 1 for confirm, enter 0 to cancel this operation.

![image](https://github.com/EzraWeng/SP-Lab-1/blob/master/image/10.png)

To check if the new record has been successfully added, enter 1 and return to the main menu. Enter 1 to print the database, the new record will be shown in the bottom of the list

![image](https://github.com/EzraWeng/SP-Lab-1/blob/master/image/11.png)

To exit the program, enter 5

![image](https://github.com/EzraWeng/SP-Lab-1/blob/master/image/12.png)



