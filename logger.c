#include "logger.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void logger(const char *message, const int *number) {
  time_t now;
  time(&now);
  printf("%s:%d %s\n", ctime(&now), *number, message);
}
