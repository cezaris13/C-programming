# Procedural programming tasks implemented during the course the same name in Vilnius university in first year (Autumn semester)

## Laboratory work Assignments

1. Enter an integer G. Enter a sequence of integers ending with a number G. Derive the number of all entered terms, the number of positive terms and the sum of the negative terms and the sum of the negative numbers (or the corresponding message if none). [Solution](./LaboratoryAssignments/Assignments/Lab1/main.c)

1. Enter an integer N. Enter N integers a1, a2, ... aN. Calculate how many are numbers equal to the maximum and how many equal to the minimum. Derive the numbers entered by discarding equal to the maximum and minimum. [Solution](./LaboratoryAssignments/Assignments/Lab2/main.c)

1. Write a function that replaces the digits in a word with the first letter of that word.  [Solution](./LaboratoryAssignments/Assignments/Lab3/main.c)

1. Make a one-way linked list. Write a procedure that throws away the item, when index of it is provided. If there is no such element, a corresponding message must be output. [Solution](./LaboratoryAssignments/Assignments/Lab4/main.c)

## Lecture homework tasks

### Week 2

- Write a maximum function without comparing the variables and using if statements. Write some tests nad execute them in the main() function. [Solution](/LectureExercises/week2/maxi/main.c)
### Week 3

The task is to write a C code that filters the data in a given data file according to certain criteria (see comments below) and allows you to retrieve the result of one or other query.
The files used in this assignment are:
generator.c - a program to create the data file db.bin
db.bin - the data file from which the queries will need to retrieve the required information
query_engine.c - the skeleton of the program to process the data file db.bin
report.txt - a text file containing a report on the results of executed queries in a specified format
query1.c - a file that implements filtering based on the condition of the corresponding query (query1)
query2.c - ...
...

#### Initial test
Before you start, make sure that the applications provided work as they should and that you can work with them successfully. If you notice
problems, contact the tutor of the exercises.
1. download the file generator.c and compile it successfully, then run the resulting program through a terminal with one parameter that specifies the size of the database to be obtained. You should see the generated records on the screen
with the student data, and when the program finishes, you should see a file db.bin in the current directory containing the
records are saved. It is recommended that you run the test with 999 records, which is the number you will need to complete the task successfully.
2. Download the file query_engine.c and compile it successfully, run the resulting program and make sure that
you get the same amount of data on the screen as you generated, i.e. 999 records.

#### Getting ready for work
If you have successfully completed the test, you are ready for the next step.
1. Review the code in the query_engine.c file and make sure you understand the operation of the program before proceeding
basic steps.
2. Read the comments about the stored student data to make sure you understand what they mean.
3. The current student data is printed on the screen on lines 48, 53 and 56. Format the output so that it
clear so that you can see what is where and distinguish between the values.
4. Use the generator to generate a smaller (10, 20, 50, 100, etc.) data file for use
for testing your code. This file can be regenerated at any time if needed.

#### Task results
To complete the tasks, modify the file query_engine.c. For some of the tasks, it will be sufficient to modify only the lines marked
marked with three asterisks, with conditional sentences that implement filtering. As you solve the tasks, for each query corresponding to
program separately in a separate file (query1.c, query2.c, etc.). These files will be needed for the report at the end of the exercise
report.txt.

At the end of the task you will need to:
1. re-generate a new data file db.bin with 999 entries
2. Create (manually) a report.txt file
3. Run each of the implemented queries (query1, query4, etc.) and write the resulting data to the report.txt file according to
the following format
4. After archiving, upload the used data (db.bin), the query codes (query1.c, query4.c, etc.) and the report to VU VMA
(report.txt) showing what you got by running your queries on your generated data.

Report format
QUERY1
[number of students meeting the filter]
First Name Last Name ...
First Name Last Name ...
First Name Last Name ...
...
QUERY4

#### Queries
Standard queries:

QUERY 1. Students who have not chosen any course. [Solution](/LectureExercises/week3/procedurinis/query1.c)

QUERY 2. Students with an average of 5.0 or higher. [Solution](/LectureExercises/week3/procedurinis/query2.c)

QUERY 3. Students whose name begins with a consonant. [Solution](/LectureExercises/week3/procedurinis/query3.c)

QUERY 4. Students who are in their second or third year. [Solution](/LectureExercises/week3/procedurinis/query4.c)

QUERY 5. Students whose first name is longer than their last name. [Solution](/LectureExercises/week3/procedurinis/query5.c)

QUERY 6. Students who do not have negative grades. [Solution](/LectureExercises/week3/procedurinis/query6.c)

QUERY 7. Students with grades between 6 and 9 inclusive. [Solution](/LectureExercises/week3/procedurinis/query7.c)

QUERY 8. Students who study Calculus and Algebra. [Solution](/LectureExercises/week3/procedurinis/query8.c)

QUERY 9. Students who study "Philosohpy" and pass the exam (>4). [Solution](/LectureExercises/week3/procedurinis/query9.c)

QUERY 10. Students who know "Lithuanian" language. [Solution](/LectureExercises/week3/procedurinis/query10.c)

QUERY 11. Students who are studying "Philosohpy" or have 10s. [Solution](/LectureExercises/week3/procedurinis/query11.c)

More complex queries:

QUERY 12. Students who know the most languages. [Solution](/LectureExercises/week3/procedurinis/query12.c)

QUERY 13. Students whose grade point average is wrong. [Solution](/LectureExercises/week3/procedurinis/query13.c)

QUERY 14. Students who do not have a course in which they are the only student. [Solution](/LectureExercises/week3/procedurinis/query14.c)

QUERY 15. Students who are within one grade of the top student. [Solution](/LectureExercises/week3/procedurinis/query15.c)

QUERY 16. Students with duplicate language or course entries. [Solution](/LectureExercises/week3/procedurinis/query16.c)

QUERY 17. Students with different grades stored on their records for the same course. [Solution](/LectureExercises/week3/procedurinis/query17.c)

QUERY 18. Students with unique names in the database. [Solution](/LectureExercises/week3/procedurinis/query18.c)
### Week 4

#### TASK 1.

 The user enters three integers (a, b, c). The program must print the quadratic equation ax2+bx+c=0
the number of solutions and, if there are solutions, their values. [Solution](/LectureExercises/week4/radavicius_4uzd/1uzd.c)

#### TASK 2.

The user enters three integers (a, b, c). The program must print all positive integers from
the interval (a; b] which are divisible by c with remainder 1. [Solution](/LectureExercises/week4/radavicius_4uzd/2uzd.c)

#### TASK 3.

The user enters three non-negative integers (a, b, c). The program must print the cth number f_c, where
f_c=f_(c-1)+f_(c-2) and f_0 = a and f_1 = b. If a=0 and b=1, f_c is the c-th number of the Fibonacci sequence. [Solution](/LectureExercises/week4/radavicius_4uzd/3uzd.c)

#### TASK 4.

The user enters three natural numbers (a, b, c). The program must print two numbers - the three numbers
the greatest common divisor (GCD) and the least common multiple (LCM). [Solution](/LectureExercises/week4/radavicius_4uzd/4uzd.c)

#### TASK 5.

 The user enters the number n followed by n real numbers. The program must calculate the sum and the average of these numbers,
and the minimum (minimum) and maximum (maximum) values. [Solution](/LectureExercises/week4/radavicius_4uzd/5uzd.c)

#### TASK 6.

 The user enters a sequence of positive numbers, the end of which is marked by the first non-positive value entered. The program shall
find which number has the highest number of digits among those entered. [Solution](/LectureExercises/week4/radavicius_4uzd/6uzd.c)
### Week 5
#### Task 1.
Write a program that performs EXACTLY the following steps in sequence within itself:
(a) defines an array that can hold 10 elements, initializing them with zero values in the same sentence
(b) prints the entire array on the screen
(c) assign values to the very first, fourth and tenth elements of the array 1, 2 and 3 respectively
(d) delete the third element from the array
(e) insert a new element into the array with the value 4, so that it is the seventh element after the insertion
(f) print the entire array to the screen
(g) ask the user to enter two numbers (x and y), and for array element s
with index x sets a new value equal to y
(h) ask the user to enter one number (x), and delete the element with index x from the array
(c) asks the user to enter two numbers (x and y), and inserts a new element with the value y into the array, so that after the insertion index is x
(j) print the entire array to the screen [Solution](/LectureExercises/week5/5uzd/1uzd.c)


#### Task 2.
Write a program that defines an array that can hold 1000 elements. This program must ask
the user to enter three numbers (a, b, c), to write c randomly generated values into the array, each of which belongs
to the interval [a; b], and print the contents of the array (those c values) to the screen.
- To obtain a random number, use the rand() function from <stdlib.h>, which allows you to obtain a random number from
the range [0; RAND_MAX]
- You will need to transform the generated value so that it fits into the specified range using arithmetic operations
- To get the same numbers repeatedly after running the program, use the srand() function from <stdlib.h>,
to which you pass a different number each time. One solution is to use the function time(NULL) from <time.h> to
the random number generator is initialized depending on the continuously changing start of the program
time. [Solution](/LectureExercises/week5/5uzd/2uzd.c)

#### Task 3.
Write a program that asks the user to enter two numbers (s and n), and then reads exactly n positive values of a future array x elements. If the value is not positive, ask the user to repeat the input of that value. The program shall print all pairs of numbers (x_i, x_j) in the array such that the product of x_i and x_j equals s. [Solution](/LectureExercises/week5/5uzd/3uzd.c)

#### Task 4.
Write a program that allows the user to enter and remember positive numbers until the user enters the first the first non-positive value. The program must print out all the prime numbers entered, printing each prime number only once, i.e. the value of the prime number already printed once shall not be repeated when the results are output. [Solution](/LectureExercises/week5/5uzd/4uzd.c)
### Week 6

#### Task 1.
Write a program that asks for a real number in the data file "in.txt", not less than 10 and not more than 1000, with no more than 3 decimal places. Consider that in the input a decimal is separated from an integer by a comma. The program must print the length of the number entered. If the data is incorrect, the program must prompt for a (possibly different) data file name with possibly already correct data. [Solution](/LectureExercises/week6/po_kablelio/main.c)

#### Task 2.
Write a program that asks you to enter three numbers per line, without spaces, positive or negative, separated by semicolons, and find the middle (in terms of value) number. If the input is correct, the result (value) must be printed by the program in a result file, the name of which must be entered and must end with the characters ".txt" (if not, the file name is asked to be re-entered). [Solution](/LectureExercises/week6/3skaiciai/main.c)

#### Task 3.
Write a program that checks whether the date in the string is correctly entered in the format YYYY-MM-DD. If so, the program should print the day of the week. The names of the days of the week must be read from the text file "week.txt", which contains seven lines with the names of the corresponding days predefined. If you change the names in the file (e.g. from English to English), the values printed in the program must also change (automatically).

#### Task 4.
Write a program that checks if the correct email address is entered in the string. Consider it correct if the string contains one @ and (after it) at least one full stop, and at least one other character before the @, after the full stop and between the two characters. If the input is correct, the program must print the domain, i.e. the part of the email after the @ symbol. All correct e-mail addresses ever submitted must be stored (append) in the text file 'emails.txt'. [Solution](/LectureExercises/week6/emails/emails.c)
### Week 7
#### Task 1
 Define a function that checks whether a given number falls within a given interval. Function prototype: int isInRange(int number, int low, int high) Description: the function must return true if number belongs to the interval [ low ; high ] (provided that low does not exceed high), otherwise it must return false

#### Task 2
 Define a function that computes the factorial of a given number. Function prototype: int getFactorial(int number) Description: the function uses recursion to compute the factorial of the nonnegative number number and returns 0 if it cannot be computed. Interesting: define a (different) function that gives the same result but does not use recursion.

#### Task 3
 Define a function that allows you to get (input) a single number from a standard input stream. Function prototype: int getPositiveNumber(char *msg) Description: the function prints the text string msg to the screen (where it expects to get a message to the user about what to enter), and repeats it (the string on the screen) (asks the user to enter it over and over again) until the user enters a single number in the string, which is what the function returns. [Solution](/LectureExercises/week7/positive_number/main.c)

#### Task 4
 Define a function that allows you to fill an array with random values. Function prototype: void generateArray(int data[], int size, int low, int high) Description: for each of the size elements in the array data , the function has to assign a random value from the range [low;high]; nothing additional has to be returned, i.e. the result of the function is the (new) values in the array. [Solution](/LectureExercises/week7/range_7/main.c)

#### Task 5
 Define a function that returns the size of a file in bytes. Function prototype: long getFileSize(char *fileName) Description: the function receives the name of the file as a parameter to open it (for reading in binary mode), and after jumping to the end of the file (fseek) to find out (ftell) how many bytes it occupies; this number of bytes is returned by the function (check with the values displayed by the OS), and if something failed (e.g. there is no such file) the function returns the value -1. [Solution](/LectureExercises/week7/failo_dydis/main.c)

#### Task 6
 Define the function for printing the menu and obtaining the user's choice in the user interface. Function prototype: int showMenu(char *menuTitle, char *menuOptions[], int menuSize, char *inputMsg) Description: the function has to print the menu title (parameter menuTitle ), then print the menu from the options in menuSize, where the names of the menu items (lines) are contained in the array menuOptions . The function then prints the text string inputMsg , which passes the text to the user requesting the user to enter his/her choice, and after receiving a number (the number of the corresponding menu item) from the user, returns it; if the user's input is incorrect (no number is entered, or no such menu item exists), then the whole printing process (header, menus, request for input) is repeated again until the input is correct. [Solution](/LectureExercises/week7/meniu/main.c)
### Week 8

#### Task 1.
Define the function createArray, which allows you to create a (new) array of integers in dynamic memory, filled with with random values from a specified range. This function obtains the size of the future array size, extracts the corresponding size block in dynamic memory, and fills it with random numbers from the range [ low ; high ]. For the last step, if you wish, you can use the generateArray function developed earlier (week 7, hour 4). The createArray function succeeds must return a pointer to the first element of the newly created array, failing NULL. For interest, rewrite the functions createArray and/or generateArray so that instead of the [] operator in the array operator *, the address operator and arrow arithmetic are used to access the array element. Only the text in the code file shall change, and the behaviour of the functions shall remain unchanged. [Solution](/LectureExercises/week8/array_creation/main.c)

#### Task 2.
Define a function that obtains argc-1 filenames via command line parameters, and returns the name of the file that occupies the most bytes in memory.  [Solution](/LectureExercises/week8/didziausias%20failas/main.c)

#### Task 3.
Define the function swap, which can swap the values of two (integer) variables passed to the function so that the swap takes place within the function and the effect remains valid not only within the function but also outside it.  [Solution](/LectureExercises/week8/swap/main.c)

#### Task 4.
Define the function splitData, which is able to split one array into two parts by creating two new arrays in dynamic memory (the first array contains the numbers at the beginning of the original array, and the second array contains the rest of the original array). This function receives five parameters. The first two parameters give the data and size of the original array, the third parameter gives the size of the first part (which determines where the rescaling takes place), and the remaining two parameters are used to pass (return) the two newly created arrays (addresses of the first elements) from the function to the rest of the program. The function first checks that the values of all (!) parameters are correct, then creates two new arrays of corresponding arrays of two different sizes in dynamic memory, and then moves the required number of elements to the first and the second array respectively. The function expects that these two arrays have not yet been created before it is called, i.e. it expects to receive parameter values equal to NULL and create the arrays internally. If successful, the function returns 0, if unsuccessful -1.  [Solution](/LectureExercises/week8/split_array/main.c)
### Week 9
#### Task 1 [Solution](/LectureExercises/week9/points/main.c)
Create data types and functions to calculate the distance between two points in the plane: a) Define a structured data type Point , which stores two real numbers in the plane of the point in the coordinates x and y. Use the keyword typedef to abbreviate the name of the data type. In the function main, create two variables of type Point p1 and p2, corresponding to a point with coordinates (2.0, 3.0) and a point with coordinates ( 4.0, 5.0), respectively. b) Define the function void printPoint(Point p) p), which, after obtaining the structure Point , which defines the coordinates of a point, prints its coordinates on the screen in the format (x, y). Use the function printPoint to print the coordinates of points p1 and p2. c) Define the function Point createPoint(double x, double y), which, given two real numbers, will produce a point with the corresponding coordinates (create a structure of type Point, fill it with the coordinates, and return it for further use). Rewrite the main function so that points p1 and p2 are created using the createPoint function (d) define a function double getDistance(Point a, Point b) that finds (returns) the distance between two points in the plane. Rewrite the main function so that it performs a single step to calculate the distance between points p1 and p2 . To do this in a single sentence in C, pass the result of createPoint( us) directly to the function getDistance, and the variables p1 and p2 become unnecessary.

#### Task 2 [Solution](/LectureExercises/week9/stekas/main.c)
 Create an integer stack by defining the necessary data types and the functions that work with them:
 a) Define a structured data type Stack , inside which a dynamic array (a pointer to the first element of the dynamic array) and its capacity (size) are stored. Use the word typedef to abbreviate the name of the datatype
 b) define the function void initStack(Stack * stack), which would set the initial values of the structure (equal to 0)
 c) define the function void printStack(Stack *stack), which would print all the elements of the dynamic array in a loop
 d) define the function int getStackSize(Stack * stack), which simply returns the capacity (size) of the dynamic array stored inside the Stack d) define a function void push(Stack *stack, int value), which (after increasing the capacity of the dynamic array) would insert a new value at the end
 e) define a function int top(Stack *stack), which would return the last element of the dynamic array (or 0 if the array is empty).
 f) define a function int pop(Stack * stack) that not only returns the last element of the dynamic array (doing the same as the function top , and therefore referring to it), but also deletes it from the array (correspondingly reducing the size of the dynamic array g) define a function void destroyStack(Stack * stack) that frees all used memory (correspondingly updating the fields inside the Stack). More information: https://en.wikipedia.org/wiki/Stack_(abstract_data_type)

#### Task 3 [Solution](/LectureExercises/week9/stekas_points/main.c)
 Create a point stack by modifying the data type descriptors and functions created so far:
 a) modify the Stack structure of Task 2 by setting the structure to store elements of type Point (Task 1) inside the structure (in a dynamic array) instead of values of type int (Task 1)
 b) modify the prototypes of the functions in Task 2 (d) and (f) to work with functions other than the one for type int
 c) modify the functions defined in Task 2 to work correctly with data of type Point and, using the functions you have created, place five points ( Point ) in the dynamic array in Stack and then print their coordinates and distances to the origin of the coordinates (to do this, modify the function printStack)
### Week 10

#### Task 1.
Implement the strlen function [Solution](/LectureExercises/week10/strlen/main.c)
#### Task 2.
Implement the function strcpy, strcat, or strcmp [Solution](/LectureExercises/week10/strcat/main.c)
#### Task 3.
Implement the function strncpy, strncat, or strncmp [Solution](/LectureExercises/week10/strncat/main.c)
#### Task 4.
Implement the function strchr, strrchr, or strstr [Solution](/LectureExercises/week10/strstr/main.c)
#### Task 5.
Implement the function memcpy, memcmp, memset, or memchr [Solution](/LectureExercises/week10/memset/main.c)
### Week 11

The main function is for testing and demonstrating how functions you have written work. None of the following of the functions described in the tasks below may not read from or print to the screen (unless the task specifies otherwise, e.g. printArray or main). There is no need for a special user interface - the result is functions and modules, not the code in main. See the compiler documentation for the compiler options that allow you to do the following, create libraries and control the translation process. If you are using GCC, you can use the information given in the lecture. At the end of your work, archive all the files you have created (both manually and automatically) during the compilation process (we include libraries and source files, (.i, .s, .o); there is no need to upload binaries containing saved data).

#### Task 1a.
Create a module by defining two functions in a separate file file.c: saveToFile, allowing the contents of an array of integers to be in a binary file, and loadFromFile, which allows to load it from that file. To load the file, we need to specify the number of elements that were was stored in the array, save the size of the array at the beginning of the binary file. Prototypes of the following functions in the header file file.h, which must be protected against re-inclusion (include guard). In another file main.c, include file.h and define two new functions: fillArray, which allows you to fill an array with random data, and printArray, which allows you to print all the elements of that array to the screen. In file main.c, create a function main and test the functions you have written in this way:

1) generate the array m1
2) print m1
3) save m1 in a file
4) load the array m2 from the file
5) print m2. If the contents of the two arrays match (which means that the functions are working correctly), write a program that prints "all good" to the screen if the contents of the arrays are the same and "something's wrong" if the contents of the arrays are different.

#### Task 1b.
Add two counters (global variables) to the file.h and file.c module to remember how many times the array
has been stored in a file and how many times it has been read from a file. Check that these counters count the operations
correctly, as follows:

1) generate arrays m1, m2 and m3 with random data
2) store array m1
3) save array m3 to a file
3) save array m3 to the same file ("on top")
4) load array m1 from that file
5) save it to another file
6) load array m3 from that (next) file
7) load array m2 from the first (previous) file.

Write a program that prints "all good" if, after the above scenario, the saveCount counter is 3 and the counter
loadCount equals 3 and otherwise print "something's wrong".

#### Task 1c.
Compile the following files on the command line:

1) get file.i by processing file.c with the preprocessor
2) get file.s with assembly code corresponding to the code in file.c and/or file.i
3) get file.o containing the compiled file.c code

4-6) get the files main.i, main.s and main.o in the same way, from file main.c

7) get the program executable file (main.exe or equivalent) by linking the files file.o and main.o. See what each of the resulting the resulting files through a text editor. Which files are text files, readable/understandable by humans, and which are not (for the "computer")?

#### Task 1d.
Create a static library libfile.a (or libfile.lib), inside which you put the file file.o. Make an executable file
(main-static.exe or its equivalent) using the static library you created. Make sure that the main-static
works correctly.

#### Task 1e.
Create a dynamic library libfile.dll (or libfile.so), inside of which you place the file file.o. Produce an executable file
(main-dynamic.exe or equivalent) that can work with that dynamic library. Make sure that the program
main-dynamic works correctly.
### Week 12

Implement each algorithm (or a variant of it) as a separate function, and evaluate each of them in main and compare their performance against each other. In each function, count the number of times the comparison has been made adjacent elements and the number of times the assignment operations have been performed on them. If you wish, you can use global variables for the two counters of these operations. In the main function, print a table to see how many operations have been performed in each version of the algorithm under consideration. [Solution](/LectureExercises/week12/sorts/main.c)

#### Task 1a.
Define a function to fill an array with randomly generated data. If you have already written
implementation, you can use it.
#### Task 1b.
Define a function to check the correctness of the sorting algorithm. This function checks whether the data in the array
are sorted in the correct order.

#### Task 2.
Implement the following versions of the sorting algorithms. Important: first, make a correct testing environment for them, i.e. one in which the comparison is correct, because each version of the algorithm sorts the same (unordered, generated at the beginning of the program) array of data during the experiment. To generate the data, use the function from Problem 1a, and once you have sorted it with one or other of the algorithms in Problem 2, use the function from Problem 1b to check the performance of the algorithm. If the algorithm does not sort the data, print this in the results table. This means that you have made a programming error.
Algorithms:
(a) Bubble sort (https://en.wikipedia.org/wiki/Bubble_sort)
(b) Quick sort (https://en.wikipedia.org/wiki/Quicksort)
(c) Insertion sort (https://en.wikipedia.org/wiki/Insertion_sort)
(d) Selection sort (https://en.wikipedia.org/wiki/Selection_sort)
(e) Merge sort (https://en.wikipedia.org/wiki/Merge_sort)

#### Task 3.

a) Rewrite the testing environment so that not one but many experiments are performed (i.e., not one but
many different sets of data) and the results table reflects a global comparison rather than a single data set
The results of a single set of data shall be presented in a global analysis.
b) Conduct experiments to evaluate the performance of the implemented algorithms.Print the results of the experiment on the mainfunction, indicating how many operations/time were required for one or the other algorithm. Using global variables, count the number of assignment and comparison operations performed by each algorithm; measure how many seconds the algorithm took to run (use <time.h> for this purpose)the functions described in the "time of day" function)