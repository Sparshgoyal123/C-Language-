#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thrusday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
    printf("Enter a valid number");
        break;
    }
    return 0;
}
