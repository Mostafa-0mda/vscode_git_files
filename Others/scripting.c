
#include <stdio.h>
#include <string.h>

int main(void) {
  char name[20];

  printf("What's your name: ");
  scanf("%s", name);

  if (strcmp(name, "mostafa") == 0) {
    printf("hello %s\n", name);
  } else {
    printf("go away\n");
  }

  return 0;
}
