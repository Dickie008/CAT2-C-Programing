#include <stdio.h>

struct employee

{

char name [25];

int id;

char department [20];

float salary;

char email [50];

} employee1;



int main ()

{

struct employee employee1 = { "John Doe", 12345, "Human Resources", 55000.50, "john.doe@company.com"};

printf("name: %s\n", employee1.name); 

 printf("id: %d\n", employee1.id); 

 printf("department: %s\n", employee1.department); 

 printf("salary: $%.2f\n", employee1.salary); 

 printf("email: %s\n", employee1.email);



return 0;

}