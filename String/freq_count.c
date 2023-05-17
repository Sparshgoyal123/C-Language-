// #include<stdio.h>
// #include<String.h>
// int main(int argc, char const *argv[])
// {
//     // char a[100];
//     // int b[26] = {0};
//     // scanf("%s",a);
//     // for(int i=0;a[i];i++){
//     //     b[a[i]-97]++;
//     // for(int i=0;i<26;i++){
//     //     if (b[i] != 0){
//     //         printf("%c",i+97);
//     //     }
//     // }
//     // }
//     char a[100];
//     int b,freq[20];
//     scanf("%s",a);
//     b = strlen(a);
//     for(int i=0;i<20;i++){
//         freq[i]=0;
    
//     for(int i=0;i<b;i++){
//         if (a[i]>='a' &&+ a[i]>='z')
//         freq[a[i]-97]++;
//     }
//     if (a[i]>='A' &&+ a[i]>='Z')
//         freq[a[i]-65]++;
//     }
//     for(int i=0;i<b;i++){
//         if (freq[i]!=0){
//             printf("%c = %d",(i+97),freq[i]);
//         }
//     }
//    return 0;
// }
#include <stdio.h>
#include <string.h>
#define MAX 100 // Maximum string size
int main(){
   char string1[MAX],string2[MAX];
   int i, length1,length2;
   int frequency1[20],frequency2[20];
   /* Input string from user */
   printf("enter the string: ");
   gets(string1);
   gets(string2);
   length1 = strlen(string1);
   length2 = strlen(string2);
   /* Initialize frequency of each character to 0 */
   for(i=0; i<20; i++){
      frequency1[i] = 0;
      frequency2[i]=0;
   }
   /* Find total number of occurrences of each character */
   for(i=0; i<length1; i++){
      /* If the current character is lowercase alphabet */
      if(string1[i]>='a' && string1[i]<='z'){
         frequency1[string1[i] - 97]++;
      }
      else if(string1[i]>='A' && string1[i]<='Z'){
         frequency1[string1[i] - 65]++;
      }
      if(string2[i]>='a' && string2[i]<='z'){
         frequency2[string2[i] - 97]++;
      }
      else if(string2[i]>='A' && string2[i]<='Z'){
         frequency2[string2[i] - 65]++;
      }
   }
   /* Print the frequency of all characters in the string */
   printf("Frequency of all characters in string1: ");
   for(i=0; i<20; i++){
      /* If current character exists in given string */
      if(frequency1[i] != 0){
         printf("'%c' = %d", (i + 97), frequency1[i]);
      }
   }
   printf("\n");
   printf("Frequency of all characters in string1: ");
   for(i=0; i<20; i++){
      /* If current character exists in given string */
      if(frequency2[i] != 0){
         printf("'%c' = %d", (i + 97), frequency2[i]);
      }
   }
   return 0;
}