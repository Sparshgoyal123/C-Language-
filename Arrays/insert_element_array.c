#include<stdio.h>
int main(int argc, char const *argv[])
{
    // int n;
    // printf("Enter no. of element ");
    // scanf("%d",&n);
    // int a[n],pos,ele;
    // for(int i=0;i<n;i++){
    //     scanf("%d",&a[n]);
    // printf("Element and position");
    // scanf("%d %d",&ele,&pos);
    // }
    // for (int i=n-1;i>=pos;i++){
    //     // for
    // }

    int n;
    printf("Enter an element");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
