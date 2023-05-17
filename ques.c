#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d, ans;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    (a>=(b || c || d))?printf("%d",a):
    (b>=(a || c || d))?printf("%d",b):
    (c>=(a|| b || d))?printf("%d",c):
    (d>=(a|| b || c))?printf("%d",d):
    printf("error");    
    return 0;
}