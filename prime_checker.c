#include "prime_checker.h"
#include <math.h>
#include <stdio.h>

int isPrime(int number) {
  if (number < 2 || (number % 2 == 0 && number != 2)) {
    return 0;
  }

  int numberSquareRoot = floor(sqrt(number));
  for (int i = 3; i <= numberSquareRoot; i += 2) {
    if (number % i == 0) {
      return 0;
    }
  }

  return 1;
}
