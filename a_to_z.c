#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    for (int i=1; i<=5; i++)
    {
        n=i-1;
        for (int j=1; j<=i; j++)
        {
            printf ("%d ",n+i);
            n+=2;
        }
        printf ("\n");
    }
    
    
    return 0;
}
