#include <stdio.h>

int main(void)
{
  char f, m, l;
  int age;

  scanf("%c %c %c %d", &f, &m, &l, &age);
  printf("my initials are: %c %c %c and my age %d.\n", f, m, l, age);
  return(0);
}

