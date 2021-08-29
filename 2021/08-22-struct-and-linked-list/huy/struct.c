#include <stdbool.h>
#include <stdio.h>

typedef struct _Person {
    char* name;
    int age;
    bool isMale;
} Person;

typedef struct _hobbies {
    int hobbies_size;
    char* hobby[1001];
} Hobbies;

typedef struct _subject {
    int subject_size;
    char* subject[1001];
} Subject;

typedef struct _Student {
    Person personal_info;
    char* school;
    int grade;
    Subject favourite_subject;
    Hobbies hobbies;
} Student;  

typedef struct _Teacher {   
    Person personal_info;
    char* school;
    char* subject;
    int experience;
    int salary;
} Teacher;

typedef struct _Employee {
    Person personal_info;
    int experience;
    int salary;
    char* company;
} Employee;

void print_person(Person p)
{
    printf("Person %s at age %d.\n", p.name, p.age);
}

void print_student(Student p)
{
    printf("Student %s at the age %d studies in grade %d at %s School.", 
    p.personal_info.name,
    p.personal_info.age,
    p.grade,
    p.school,
    p.personal_info.isMale ? "He" : "She"
    );
    printf("\nHis %s %s ",
    p.hobbies.hobbies_size == 1 ? "hobby" : "hobbies",
    p.hobbies.hobbies_size == 1 ? "is" : "are"
    );
    for(int i = 0; i < p.hobbies.hobbies_size; ++i) {
        printf("%s", p.hobbies.hobby[i]);
        printf("%s", i != p.hobbies.hobbies_size - 1 ? ", " : ".");
    }
    printf("\n%s favourite subject %s ",
    p.personal_info.isMale ? "His" : "Her", p.favourite_subject.subject_size == 1 ? "is" : "are");
    for(int i = 0; i < p.favourite_subject.subject_size; ++i) {
        printf("%s", p.favourite_subject.subject[i]);
        printf("%s", i != p.favourite_subject.subject_size - 1 ? ", " : ".");
    }
    printf("\n");
}

void print_teacher(Teacher p) 
{
    printf("Teacher %s at the age %d teaches at %s.\n%s %s teaches subject %s.\n%s has %d %s of experience."
    "\n%s salary is %d %s.\n",
    p.personal_info.name,
    p.personal_info.age,
    p.school,
    p.personal_info.isMale ? "Mr" : "Miss", 
    p.personal_info.name,
    p.subject,
    p.personal_info.isMale ? "He" : "She",
    p.experience,
    p.experience == 1 ? "year" : "years",
    p.personal_info.isMale ? "His" : "Her",
    p.salary,
    p.salary == 1 ? "dollar" : "dollars"
    );
}

void print_employee(Employee p) 
{
    printf("Employee %s at the age %d works at %s.\n%s has %d %s of experience.\n%s salary is %d %s\n",
    p.personal_info.name,
    p.personal_info.age,
    p.company,
    p.personal_info.isMale ? "He" : "She",
    p.experience,
    p.experience == 1 ? "year" : "years",
    p.personal_info.isMale ? "His" : "Her",
    p.salary,
    p.salary == 1 ? "dollar" : "dollars"
    );
}

int main()
{
}