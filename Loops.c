// Print numbers from 1 to 10
#include <stdio.h>

int main(void) {
  int i;
  int count;
  int sum = 0;

  // entering data
  printf("Enter your number: ");
  scanf("%d", &i);

  for (count = i; count < 100; ++count)
  {
    sum = sum + count;
  }

  printf("Sum: %d\n", sum);

  return 0;
}