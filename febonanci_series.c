# include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c,d;
    a = 0;
    b = 1;
    scanf("%d",&c);
    for (int i=0;i<=c;i++){
        d = a+b;
        printf("%d\t",d);
        a = b;
        b = b+i;
    }
    return 0;
}
