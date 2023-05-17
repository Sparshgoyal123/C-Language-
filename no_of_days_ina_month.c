#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    scanf("%d",&a);
    switch (a=2)
    {
    case 0:
        printf("28");
        break;
    case 1 : switch ((a==1 || a==3 || a==5 || a==7 ||a==8 || a==10 ||a==12))
    {
    case 1:
        printf("30");
        break;
    case 0:
        printf("31");
        break;
    default:
        printf("Enter a valid month no.");
        break;
    
    }
    }
    return 0;
}
