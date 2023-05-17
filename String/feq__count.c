#include <stdio.h>
void main()
{
    char a[100];
    int b[26]={0};
    scanf ("%s", a);
    for (int i=0; a[i]; i++)
    {
        b[a[i]-97]++;
    }
    for (int i=0; b[i]<26; i++)
    {
        if (b[i]>0)
        {
            printf ("%c=%d\n", i+97, b[i]);
        }
    }
}