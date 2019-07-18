#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// A small function to cut down a string to it's first letter
char* cutString(char* str)
{
  char* newString = (char*)malloc((size_t)((strlen(str) + 1) * sizeof(char)));
  if (newString == NULL)
  {
    printf("malloc failed!");
  }
  //int flag = 0;
  strcpy(newString, str);
  for (int i = 0; i < 2; i++)
  {
    if (i == 1)
    {
      newString[i] = '\0';
    }
  }
  char* helper = (char*)realloc(newString, sizeof(char) + 1);
  if (helper != NULL)
  {
    newString = helper;
  }
  else
  {
    printf("realloc failed!\n");
    free(newString);
    newString = NULL;
  }
  return newString;
}

int main()
{
  //printf("%d\n", result);
  char string1[] = "hello5";

  char* test = cutString(string1);
  printf("%s\n", test);
  
  free(test);
  test = NULL;
  return 0;
}
