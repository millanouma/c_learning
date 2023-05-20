# This is a simple random number generator for a dice game.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  // Write your code below
  int randomNumber = rand() % 20 + 1;
  printf("%d\n", randomNumber);
}

#Another way to do it using functions:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Modify the code below
int getRandomNumber(int maxNumber) {
  int randomNumber = rand() % maxNumber + 1;
  return randomNumber;
}

int main(void) {
  srand(time(NULL));
  // Modify the code below
  int randomNumber = getRandomNumber(6);
  printf("My random number is: %d", randomNumber);
}
