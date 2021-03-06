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

int nonvowel(char letter)
{
    int count=6;
    char vowels[6]="eyuioa";
    for(int i=0;i<count;i++){
        if(tolower(letter)==vowels[i]){
            return 0;
        }
    }
    return 1;
}
int tens(int grades[],int load)
{
    for(int i=0;i<load;i++){
        if(grades[i]==10){
            return 1;
        }
    }
    return 0;
}
int coursesActive(Student s)
{
    int calculus=0,algebra=0;
    for(int i=0;i<s.load;i++){
        if(!strcmp(s.courses[i],"Algebra")){
            algebra=1;

        }
        if(!strcmp(s.courses[i],"Calculus")){
            calculus=1;
        }

}
        if(calculus>0&&algebra>0){
            return 1;
        }
    return 0;
}
int philosophy(Student s)
{
    for(int i=0;i<s.load;i++){
        if(!strcmp(s.courses[i],"Philosophy")&&s.grades[i]>4){
            return 1;

        }
    }
    return 0;
}
int lithuanian(Student s)
{
    char *pnt=NULL;
    pnt=strstr(s.languages,"Lithuanian");
    if(pnt!=NULL){
        return 1;
    }
    return 0;
}
int checkLanguages(Student s)
{
    int number=1;
    for(int i=0;i<100;i++){
        if(s.languages[i]==' '){
            number++;
        }
    }
    return number;
}
int position(char name[],int arg){
    char names[30][30] = {
	"Alex", "Robert", "Jessie", "Adam", "Sole",
	"Jamie", "Jenny", "Alice", "Victor", "Charlie",
	"Matt", "Jerry", "George", "Jim", "Luke",
	"Debora", "Kim", "Melissa", "Richard", "Julie",
	"Angelina", "Betty", "Helen", "Jane", "Sarah",
	"Kylie", "Arnold", "Karl", "Wilhelm", "Eve"
    };
    char surnames[30][30] = {
	"Smith", "Doe", "Perry", "Brightman", "Lockwood",
	"Enderman", "Brighthill", "Sleight", "Note", "Wood",
	"Sheen", "Hudson", "King", "de Vito", "Norman",
	"Leben", "Quarry", "Hat", "Damon", "Thornton",
	"Davison", "Madsen", "Stapleton", "Wozniak", "Darry",
	"Sadman", "Gibbs", "Gibson", "Druddle", "Kesting"
};
    if(arg==1){
        for(int i=0;i<30;i++){
        if(strcmp(*(names+i),name)==0){
            return i;
        }
    }

    }
    if(arg==0){
         for(int i=0;i<30;i++){

            if(strcmp(*(surnames+i),name)==0){
                return i;
            }
        }

    }
}
int duplicate(Student s){
    for(int i=0;i<s.load-1;i++){
        for(int j=i+1;j<s.load;j++){
            if(strcmp(*(s.courses+i),*(s.courses+j))==0){
                return 1;
            }
        }
    }
}
int language_duplicate(Student s){
    char languages[5][20] = {
	"English", "Russian", "Spanish", "French", "Lithuanian"
    };
    char letters[5]="ERSFL";
        for(int i=0;i<5;i++){
            int result=0;
            for(int j=0;j<strlen(s.languages);j++){
                if(letters[i]==s.languages[j]){
                    result++;
                }
            }
            if(result>1){
                return 1;
            }
        }
    return 0;
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
        int number_of_names[30]={0},number_of_surnames[30]={0};
        for(int i=0;i<size;i++){
            Student s = students[i]; // store data for each student in s
			number_of_names[position(s.name,1)]++;
            number_of_surnames[position(s.surname,0)]++;
        }
		int counterDemo = 0; // for counting students
		for (int i = 0; i < size; ++i){ // process all the student records in database
			Student s = students[i]; // store data for each student in s
			if(language_duplicate(s)){ // *** first filter, conditions on the student
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
