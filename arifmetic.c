#include <stdio.h> 

int main (void)
{
	int a = 10, b = 20, c = 3, d = 2, e =4;
	int itog = 0, itog2 = 0;

	itog = a + b - c * d / e;
	printf("Total: %d\n", itog);

	itog2 = (a + b) - ((c * d) / e); /*формула удобная*/
	printf("Total more useful: %d\n", itog2);

	printf("Increment %d\n", ++e);
	printf("Post Increment %d\n", a++);
	printf("%d - a\n", a);

	printf("Decrement %d\n", --d);
	printf("Post Decrement %d\n", e--);
	printf("%d - e\n", e);
}