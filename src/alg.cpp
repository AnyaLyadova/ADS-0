// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
  int result = 0;
  int del = 0;
  if (a > b) {
    del = a;
  } else {
    del = b;
  }
  for (int i = 1; i <= del; ++i) {
    if ((a % i == 0) && (b % i == 0) && (i > result)) {
      result = i;
    }
  }
  return result;
}
