#include <stdio.h>
#include <stdlib.h>

typedef struct Student {

	char name[7];
	int korean;
	int english;
	int math;
	double avg;

}Student;

int main() {
	Student * person;
	int num_of_student, i;


	scanf("%d", &num_of_student);
	person = (Student *)malloc(sizeof(Student) * num_of_student);

	for (i = 0; i<num_of_student; i++) {
		scanf("%s %d %d %d", &person[i].name, &person[i].korean, &person[i].english, &person[i].math);
		person[i].avg = (double)(person[i].korean + person[i].english + person[i].math) / 3.0f;
	}

    for(i=0; i<num_of_student; i++){

        if  ((person[i].korean >=90 || person[i].english >=90 || person[i].math >= 90) && (person[i].korean < 70 || person[i].english <70 || person[i].math <70)){
                printf("%s %0.1lf %s %s\n", person[i].name, person[i].avg, "GREAT", "BAD");    
        }
        else if (person[i].korean >=90 || person[i].english >=90 || person[i].math >= 90){
            printf("%s %0.1lf %s\n", person[i].name, person[i].avg, "GREAT");
        }
        else{
            printf("%s %0.1lf %s\n", person[i].name, person[i].avg, "BAD");
        }
    }

    free(person);
    return 0;
}