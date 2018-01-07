#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
  int a[10]; // объявлен массив a из 10 элементов
  int i;
  int MULT = 1;
  // Ввод элементов массива
  for (i = 0; i<10; i++) 
  {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]); // &a[i] - адрес i-го элемента массива
  }
  // Вывод элементов массива
  for (i = 0; i<10; i++)
    printf("%d  ", a[i]); // пробел в формате печати обязателен
  getchar(); getchar();

  for (i = 0; i < 10; i++) {
        if(i % 2 == 0)
                MULT = MULT * a[i];
              
                    
        }   

    printf("Multiplication = %d", MULT);
        return 0;
}