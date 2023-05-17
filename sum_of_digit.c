#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,n,s=0,m,i;
    scanf("%d",&a);
    for (i = 1;i<=a;i++){
        scanf("%d",&n);
        while(n>0){
            m = n%10;
            s = s+m;
            n = n/10;
        }
            printf ("%d\n",s);
            s = 0;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
