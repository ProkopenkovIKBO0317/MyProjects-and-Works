#include <stdio.h>
/* печать таблицы температур по Фаренгейту и Цельсию для
fahr = 0, 20 ... 300; вариант с плавающей точкой */
void main(void)
{
	int fahr;
	for (fahr = 300; fahr >= 0; fahr = fahr -1)
		printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32.0));
}
