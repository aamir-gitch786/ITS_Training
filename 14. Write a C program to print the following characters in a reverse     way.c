/*
14. Write a C program to print the following characters in a reverse     way.
    Test Characters: 'X', 'M', 'L'

    Expected Output:
    The reverse of XML is LMX
*/
#include<stdio.h>
int main()
{
    char str[4];
    printf("Enter the charaters: ");
    fgets(str,sizeof(str),stdin);
    printf("The revers of %s is ",str);
    printf("%s",strrev(str));
    return 0;
}
/*printf("The revers of %s is %s ",str,strrev(str));
i think here strrev function run first
*/
#include <stdio.h>
#include <string.h>

int main() {
  char test_chars[] = "XML";
  int len = strlen(test_chars);

  printf("The reverse of %s is ", test_chars);
  for (int i = len - 1; i >= 0; i--) {
    printf("%c", test_chars[i]);
  }
  printf("\n");

  return 0;
}

