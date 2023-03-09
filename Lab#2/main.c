#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct employee{
	int em_id;
	char em_name[10];
	int em_age;
	char em_phone[12];
	float em_salary;
}employee_t;

void employee_info_(employee_t my_emp){
	printf("id: %d\n", my_emp.em_id);
	printf("name: %s\n", my_emp.em_name);
	printf("age: %d\n", my_emp.em_age);
	printf("phone: %s\n", my_emp.em_phone);
	printf("salary %f\n", my_emp.em_salary);
}


int main(){
	printf("size : %d\n",(int)sizeof(employee_t));
	employee_t em;
	em.em_id = 1111;
	strcpy(em.em_name,"owo");
	em.em_age = 45;
	strcpy(em.em_phone,"0900111222");
	em.em_salary = 26000;	
	employee_info_(em);
	
	return 0;	
}
