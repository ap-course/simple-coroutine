#include <cmath>
#include <iostream>

bool IsPrime(int num) {
  for (int i = 2; i <= std::sqrt(num); ++i) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int FindNextPrime() {
  static int prime_num = 1;

  for (int i = prime_num + 1;; ++i) {
    if (IsPrime(i)) {
      prime_num = i;
      return prime_num;
    }
  }
}

int main() {
  for (int i = 0; i < 15; ++i) {
    std::cout << "Prime num: " << FindNextPrime() << std::endl;
  }
  return 0;
}
