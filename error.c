#include "stdio.h"

/*fsdfsdfsdf*/
int main()
{
    int day=0;
    int month=0;
    int year=0;
    printf("Input date in format: dd mm year\n\n");
    scanf("%d %d %d", &day, &month, &year);

    int a = (14 - month) / 12;
    int y = year - a;
    int m = month + 12*a - 2;
    int DaysOfWeek = (7000 + (day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12)) % 7;
    switch(DaysOfWeek)
    {
        case 0: printf("This is Sunday");
            break;
        case 1: printf("This is Monday");
            break;
        case 2: printf("This is Tuesday");
            break;
        case 3: printf("This is Wednesday");
            break;
        case 4: printf("This is Thursday");
            break;
        case 5: printf("This is Friday");
            break;
        case 6: printf("This is Saturday");
            break;
    }
    

}