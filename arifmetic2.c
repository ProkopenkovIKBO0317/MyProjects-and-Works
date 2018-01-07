#include <stdio.h>

int main (void)
{
	/*Чтобы стало совсем понятно
	напишем небольшую программу
	которая будет вычислять следующую формулу k = (m+1) - (n-1-r);*/
	int k = 0, m = 20, n = 40, r = 25;
	/*
	++m; // 21
	n = n - 1 - r;
	k = m - n;
	printf("Variable k = %d\n", k);*/

	printf("Variable k = %d\n", k = (m+1) - (n-1-r));
}