    #include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct Student {
	char name[30];
	char surname[30];
	int course;					// year of study
	double average; 			// average grade

	int load; 					// number of courses
	char courses[10][30]; 		// course names
	int grades[10]; 			// course grades

	char languages[100];		// spoken languages

} Student;

int position(char name[]){
	char courses[10][30] = {
            "Algebra", "Computer programming", "Operating systems", "Physics", "Philosophy",
            "Calculus", "Set theory", "Algorithms", "Discrete mathematics", "Computer networks"
        };
    for(int i=0;i<10;i++){
        if(strcmp(*(courses+i),name)==0){
            return i;
        }
    }
}
int main(int argc, char *argv[]) {
	FILE *db = NULL;
	// open database file for reading, provide a parameter or use default "db.bin"
	if (argc > 1)
		db = fopen(argv[1], "rb");
	else
		db = fopen("db.bin", "rb");

	if (db){
		Student students[1000];			// all the data goes here
		int size = 0;					// how many students in database

		// reading data from file
		fread(&size, sizeof(int), 1, db);

		for (int i = 0; i < size; i++){
			fread(&students[i], sizeof(Student), 1, db);
		}
		printf("%d records loaded succesfully\n", size);


		// MODIFY CODE BELOW

        int number_in_course[10]={0};
        for(int i=0;i<size;i++){
            Student s = students[i]; // store data for each student in s
			for(int j=0;j<s.load;j++){
			number_in_course[position(s.courses[j])]++;
			}
        }
		int counterDemo = 0; // for counting students
		for (int i = 0; i < size; ++i){ // process all the student records in database
			Student s = students[i]; // store data for each student in s
            float precision=0.0000001;
            int result=0;
            for(int i=0;i<s.load;i++){
                if(number_in_course[position(s.courses[i])]==1){
                    result=1;
                    break;
                }
            }
			if(!result){ // *** first filter, conditions on the student
				printf("%s %s %d %f %d\n", s.name, s.surname, s.course, s.average, s.load); // print student data
				int anotherDemo = 0; // for counting courses/grades
				for (int i = 0; i < s.load; ++i){ // process each course taken by the student
					if(1){ // *** second filter, conditions on the course/grade
						++anotherDemo; // counting courses
						printf("%s %d\n", s.courses[i], s.grades[i]);
					}
				}
				printf("%s\n\n", s.languages);

				if (anotherDemo == s.load) // *** third filter, various other conditions
					++counterDemo; // counting studfents
			}
		}
		printf("Filter applied, %d students found\n", counterDemo); // how many passed the filters
		fclose(db);
	} else {
		printf("File db.bin not found, check current folder\n");
	}

	return 0;
}
