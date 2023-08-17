
#include <stdio.h>

int main(void) {
  char input;

  printf("Enter a character: ");
  scanf("%c", &input);

  if (input == 'm') {
    printf("meow\n");
  } else {
    printf("go out\n");
  }

  return 0;
}