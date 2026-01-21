Kenjiro Otake 
USC ID: 6045203135
kenjiroo@usc.edu

1/21/2026
EE355, Lab 1

Lab summary: 

Problem 1:
Question 1: 
   $ mkdir backup
   $ cp * backup/
Question 2: 
   $ mv ~/*.h ./
   uses the ~ shortcut for 'home directory' 
   and the . shortcut for 'current directory'
Question 3:
   $ rm -r temp
   by default, $rm only removes directories (files) 
   and not folders. '-r' tells the remove command to act recursively, 
   removing all directories inside a given folder that is meant
   to be deleted. 
Question 4:
   $ ps // this lists all programs currently running 
   once the program name and corresponding number is found, run: 
   $ kill // with the number after a space after kill    
Question 5: 
   To check the OS: 
   $ cat /etc/os-release

   To check the gcc version: 
   $ gcc --version
   
   To check the g++ version: 
   $ g++ --version

   To check the python version: 
   $ python3 --version
   
   
Problem 2: 
Files: part2_main.c 

Covariance calculator function 
Equation for the calculator was taken and adapted for software from the 
Wikipedia page: https://en.wikipedia.org/wiki/Covariance, 
under "Calculating the sample covariance". 


Problem 3: 
Files: part3_main.py, part3_calc_cov_and_var.c (copy of part2_main.c), 
data_table.csv

Covariance calculator for a .csv file using covariance calculator function
file from problem 2. Python file acts as a front end for extracting the 
values from the cells in the .csv file, and passes the values to the .c 
covariance calculator file, and then displays the sample covariance. 

The given data_table.csv file provided this output: 
"The Cov of two input arrays is -18.17, and their own Var are 100.29 and 108.78." 

