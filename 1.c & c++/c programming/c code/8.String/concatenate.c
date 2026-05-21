#include <stdio.h>
void main(){
  char str1[200];
  printf("input string : ");
  gets(str1);
  char str2[100];
  printf("2nd string :");
  gets(str2);

  int i;
  for (i = 0; str1[i] != '\0'; i++);
  str1[i] = ' ';
  i++;

  for (int j = 0; str2[j] != '\0'; j++){
    str1[i] = str2[j];
    i++;
  }
  str1[i] = '\0';
  printf("After concatenation, the string would look like:\n %s", str1);
}