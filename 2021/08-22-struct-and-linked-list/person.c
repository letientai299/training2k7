#include <stdbool.h>
#include <stdio.h>

struct _Person {
  char* name;
  int age;
  char* job;
  bool isMale;
};

typedef struct _Person Person;

typedef struct _Student {
  Person personal_info;
  // TODO
} Student;

typedef struct _Teacher {
  Person personal_info;
  // TODO
} Teacher;

typedef struct _Employee {
  Person personal_info;
  // TODO
} Employee;

void print_person(Person p)
{
  printf("Person %s at age %d. %s job is %s.\n", p.name, p.age,
      (p.isMale) ? "His" : "Her", p.job);
}

int main()
{
  Person huy = {
    .name = "Quoc Huy",
    .age = 14,
    .job = "student",
    .isMale = true,
  };
  print_person(huy);

  Person nhi = {
    .name = "Ngoc Nhi",
    .age = 22,
    .job = "employee",
    .isMale = false,
  };
  print_person(nhi);
}
