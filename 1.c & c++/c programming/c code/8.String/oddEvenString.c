#include <stdio.h>
int main()
{
    char str1[30] = "ABCDEF";
    char str2[30] = "GHIJKL";
    char str3[60];
    int i;
      for ( i = 0; str1[i] != '\0'; i++)
    {   str3[2 * i] = str1[i];
        str3[2 * i + 1] = str2[i];
    }
    str3[2*i]= '\0';
    printf("%s", str3);
    return 0;
}