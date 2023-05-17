#include <stdio.h>

int main() {
  int n,a,reverse = 0, remainder;
  scanf("%d", &n);
  a = n;
  while (a != 0) {
    remainder = a % 10;
    reverse = reverse * 10 + remainder;
    a /= 10;
  }
  if (n==reverse){
    printf("palindrome");
  }
  else{
    printf("not a palindrome");
  }
  return 0;
}