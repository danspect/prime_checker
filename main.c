#include "logger.h"
#include "prime_checker.h"

int main() {
  const int numbers = 5000;
  for (int i = -50; i < numbers; i++) {
    if (isPrime(&i) == 0) {
      logger("is prime", &i);
      continue;
    }
    logger("is not prime", &i);
  }

  return 0;
}
