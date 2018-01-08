 #include <stdio.h>
 
int main(int argc, const char * argv[]) {
    int min, max, count, numb;
    printf("Input count numbers:");
    scanf("%d", &count);
    printf("%d:", count);
    scanf("%d", &numb);
    min = max = numb;
    while (--count > 0) {
        printf("%d:", count);
        scanf("%d", &numb);
        if (min > numb) min = numb;
        if (max < numb) max = numb;
    }
    printf("Max number: %d\nMin number: %d\n", max, min);
    return 0;
}