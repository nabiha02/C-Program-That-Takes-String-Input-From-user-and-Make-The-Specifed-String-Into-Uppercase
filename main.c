/* Write a c program that takes input from user , make the specified
one into uppercase specified by the user and printf the string again
with the updated uppercase */

#include <stdio.h>
#include <string.h>

int main(void){

 char str[100], ch ;
 int i;

 printf("input your string: ");
 fgets(str, sizeof(str), stdin);
 printf("Input the number of the string you want to capitalize: ");
 scanf("%d", &i);

 str[i] = toupper(str[i]);

 printf("After the capitalization: %s\n", str);


 return 0;
}
