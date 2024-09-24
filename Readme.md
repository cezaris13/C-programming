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
...
Paaiškinimas: neprivaloma atlikti visas užklausas. Ataskaitų faile rašomos tik tos užklausos, kurias įgyvendinote. Failą
siūloma pildyti rankomis, pagal tai, ką matote ekrane paleidę atitinkamą queryX.c failą. Vietoje laužtinių skliaustų eilutėje
reikia užrašyti, kiek studentų tenkina duotą užklausą. Jei skaičius teigiamas, žemiau reikia įkelti pirmųjų trijų užklausą
tenkinusių studentų įrašų duomenis (privaloma Vardas ir Pavardė, kitkas savo nuožiūra, kaip patogiau). Jei studentų
mažiau nei trys, įkelkite kiek yra, jei daugiau – vietoje ketvirtos ir vėlesnių eilučių dėkite daugtaškį.

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

Užduotis 1.
Parašykite programą, kuri paprašo duomenų faile „in.txt“ pateikti realų skaičių, ne mažesnį už 10 ir nedidesnį už 1000, su ne daugiau kaip 3 skaičiais po kablelio. Laikykite, kad įvestyje trupmeninę dalį nuo sveikosios skiria kablelis. Programa turi atspausdinti įvesto skaičiaus ilgį. Jei duomenys pateikti nekorektiškai, programa turi prašyti įvesti (tikėtina, kito) duomenų failo vardą, su galimai jau korektiškais duomenimis.

Užduotis 2.
Parašykite programą, kuri paprašo įvesti tris skaičius vienoje eilutėje, be tarpų, teigiamus arba neigiamus, kuriuos vieną nuo kito skiria kabliataškiai, ir raskite vidurinį (pagal reikšmę) skaičių. Jei įvestis korektiška, rezultatą (reikšmę) programa turi atspausdinti rezultatų faile, kurio vardas įvedamas ir privalo baigtis simboliais „.txt“ (jei taip nėra, prašoma failo vardą įvesti iš naujo).

Užduotis 3.
Parašykite programą, kuri patikrina, ar eilutėje yra korektiškai įvesta data, formatu YYYY-MM-DD. Jei taip, programa turi atspausdinti, kokia tai savaitės diena. Savaitės dienų pavadinimai turi būti skaitomi iš tekstinio failo „week.txt“, kuriame yra iš anksto įrašytos septynios eilutės su atitinkamų dienų pavadinimais. Pakeitus pavadinimus faile (pvz. iš lietuvių kalbos į anglų), programoje spausdinamos reikšmės irgi turi pasikeisti (automatiškai).

Užduotis 4.
Parašykite programą, kuri patikrina, ar eilutėje yra korektiškai įvestas el.pašto adresas. Laikykite, kad jis korektiškas, jei eilutėje yra vienas simbolis @ ir (po jo) bent vienas taškas, o prieš @, po taško ir tarp šių dviejų simbolių – ne mažiau nei vienas kitoks simbolis. Jei įvestis korektiška, programa turi atspausdinti domeną, t.y. el.pašto dalį po simbolio @. Visi kada nors pateikti korektiški elektroninio pašto adresai turi būti kaupiami (append) tekstiniame faile “emails.txt”.
### Week 7

### Week 8

#### Task 1.
Define the function createArray, which allows you to create a (new) array of integers in dynamic memory, filled with with random values from a specified range. This function obtains the size of the future array size, extracts the corresponding size block in dynamic memory, and fills it with random numbers from the range [ low ; high ]. For the last step, if you wish, you can use the generateArray function developed earlier (week 7, hour 4). The createArray function succeeds must return a pointer to the first element of the newly created array, failing NULL. For interest, rewrite the functions createArray and/or generateArray so that instead of the [] operator in the array operator *, the address operator and arrow arithmetic are used to access the array element. Only the text in the code file shall change, and the behaviour of the functions shall remain unchanged. [Solution](/LectureExercises/week8/array_creation/main.c)

#### Task 2.
Define a function that obtains argc-1 filenames via command line parameters, and returns the name of the file that occupies the most bytes in memory.  [Solution](/LectureExercises/week8/didziausias%20failas/main.c)

#### Task 3.
Define the function swap, which can swap the values of two (integer) variables passed to the function so that the swap takes place within the function and the effect remains valid not only within the function but also outside it.  [Solution](/LectureExercises/week8/swap/main.c)

#### Task 4.
Define the function splitData, which is able to split one array into two parts by creating two new arrays in dynamic memory (the first array contains the numbers at the beginning of the original array, and the second array contains the rest of the original array). This function receives five parameters. The first two parameters give the data and size of the original array, the third parameter gives the size of the first part (which determines where the rescaling takes place), and the remaining two parameters are used to pass (return) the two newly created arrays (addresses of the first elements) from the function to the rest of the program. The function first checks that the values of all (!) parameters are correct, then creates two new arrays of corresponding arrays of two different sizes in dynamic memory, and then moves the required number of elements to the first and the second array respectively. The function expects that these two arrays have not yet been created before it is called, i.e. it expects to receive parameter values equal to NULL and create the arrays internally. If successful, the function returns 0, if unsuccessful -1.  [Solution](/LectureExercises/week8/split_array/main.c)

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

Funkcija main yra skirta testavimui ir demonstracijai, kaip veikia jūsų parašytos funkcijos. Nei vienoje iš žemiau
užduotyse aprašomų funkcijų negali būti nei skaitymo iš, nei spausdinimo į ekraną (nebent užduotyje nurodoma kitaip,
pvz. printArray ar main). Specialios vartotojo sąsajos daryti nereikia – rezultatas yra funkcijos ir moduliai, o ne
main esantis kodas.
Naudojamo kompiliatoriaus parinktis (angl. compiler options), leidžiančias vykdyti žemiau nurodytus veiksmus, kurti bibliotekas ir valdyti transliavimo procesą, rasite kompiliatoriaus dokumentacijoje. Jei naudojatės GCC, galite
pasinaudoti paskaitos metu pateikta informacija.
Darbo pabaigoje suarchyvuokite visus užduočių rengimo procese sukurtus (tiek rankomis, tiek automatiškai) failus (įtraukiame bibliotekas ir kodo failus, (.i, .s, .o); binarinių failų su išsaugotais duomenimis kelti nereikia).

Užduotis 1a.
Sukurkite modulį, atskirame faile file.c apibrėždami dvi funkcijas: saveToFile, leidžiančią sveikų skaičių masyvo turinį
išsaugoti binariniame faile, ir loadFromFile, leidžiančią iš to failo jį užkrauti. Kad užkraunant žinoti kiek elementų buvo
saugoma masyve, išsaugodami duomenis binarinio failo pradžioje išsaugokite to masyvo dydį. Šių funkcijų prototipus
pateikite antraštės faile file.h, kurį būtinai apsaugokite nuo pakartotinio įtraukimo (angl. include guard). Kitame faile
main.c įtraukite file.h ir apibrėžkite dvi naujas funkcijas: fillArray, leidžiančią užpildyti masyvą atsitiktiniais duomenimis, ir printArray, leidžiančią atspausdinti visus to masyvo elementus į ekraną. Faile main.c sukurkite funkciją main ir patikrinkite savo parašytas funkcijas tokiu būdu: 1) sugeneruokite masyvą m1 2) atspausdinkite m1 3) išsaugokite m1 faile 4) užkraukite iš failo masyvą m2 5) atspausdinkite m2. Jei abiejų masyvų turinys sutampa (kas reiškia, jog funkcijos veikia korektiškai), parašykite programą, kuri spausdina tekstą „all good“ į ekraną, jei masyvų turinys sutampa, ir „something’s wrong“, jei masyvų turinys skiriasi.

Užduotis 1b.
Papildykite file.h ir file.c esantį modulį dviem skaitliukais (globalūs kintamieji), leidžiančiais įsiminti, kiek kartų masyvas
buvo saugomas į failą ir kiek kartų buvo iš failo nuskaitoma. Patikrinkite, jog tie skaitliukai skaičiuoja operacijas
korektiškai, tokiu būdu: 1) sugeneruokite masyvus m1, m2 ir m3 su atsitiktiniais duomenimis 2) išsaugokite masyvą m1
į failą 3) į tą patį failą („ant viršaus“) išsaugokite masyvą m3 4) užkraukite iš to failo masyvą m1 5) išsaugokite kitame
faile masyvą m2 6) užkraukite iš to (kito) failo masyvą m3 7) užkraukite iš pirmo (ankstesnio) failo masyvą m2.
Parašykite programą, kuri spausdina „all good“, jei įvykdžius minėtą scenarijų skaitliukas saveCount lygus 3 ir skaitliukas
loadCount lygus 3, o kitu atveju – spausdinkite „something’s wrong“.

Užduotis 1c.
Kompiliuodami per komandinę eilutę, sugeneruokite šiuos failus: 1) gaukite file.i, apdoroję file.c preprocesoriumi 2)
gaukite file.s su asemblerio kodu, atitinkančiu file.c ir/ar file.i esantį kodą 3) gaukite file.o, kuriame būtų sukompiliuotas
file.c kodas 4-6) analogiškai gaukite failus main.i, main.s ir main.o, iš failo main.c ir 7) gaukite programos vykdomąjį failą
(main.exe arba jo analogą), surišdami (angl. linking) failus file.o ir main.o. Pasižiūrėkite, kaip atrodo kiekvienas iš gautų
failų, per tekstinį redaktorių. Kurie failai yra tekstiniai, skaitomi/suprantami žmogui, o kurie ne (skirti „kompiuteriui“)?

Užduotis 1d.
Sukurkite statinę biblioteką libfile.a (arba libfile.lib), į kurios vidų įdėkite failą file.o. Pagaminkite vykdomąjį failą
(main-static.exe arba jo analogą), naudodamiesi ta sukurta statine biblioteka. Įsitikinkite, kad programa main-static
veikia korektiškai.

Užduotis 1e.
Sukurkite dinaminę biblioteką libfile.dll (arba libfile.so), į kurios vidų įdėkite failą file.o. Pagaminkite vykdomąjį failą
(main-dynamic.exe arba jo analogą), kuris galėtų dirbti su ta dinamine biblioteka. Įsitikinkite, kad programa
main-dynamic veikia korektiškai.

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