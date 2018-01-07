#include <stdio.h> 

void main (void)
{
	int age, weight;
	char name[50], surname[50]; /*массив символов*/

		printf("Please, enter your name: ");
		scanf("%s", name);  /*%s - для строки*/

		printf("Please, enter your surname: ");
		scanf("%s", surname);  /*%s - маркер для вывода строки*/

		printf("Enter your age: ");
		scanf("%d", &age);

		printf("Enter your weight: ");
		scanf("%d", &weight);
		printf("\n");

		printf("Your Information:\n");
		printf("Name: %s\nSurname: %s\nAge - %d years\nWeight - %d kilogramms.\n", name, surname, age, weight);
}