# Prime Checker
---
A simple and fast prime finder implementation.

## How it works
---
First, we check if the number is less than two or if the number is even:
```c
if (number < 2 || (number % 2 == 0 && number != 2)) {
    return 1;
  }
```
Now we get the number square root:
```c
#include <math.h>
...
int numSquareRoot = floor(sqrt(number));
```
The last step is to create a loop and check if the modulo of the number is equal to zero.
```c
for (i = 3; i <= numberSquareRoot; i += 2) {
    if (*number % i == 0) {
      return 1;
    }
  }

  return 0;
```
If the numbers has no divisors till it's square root, then it's a prime number.
Read more [here](https://stackoverflow.com/questions/54543956/finding-prime-number-using-the-square-root-method).
