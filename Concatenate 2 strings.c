#include <stdio.h>
int main() {
  printf("RA2211042010059")
  char s1[100] = "Sankalp ", s2[] = "is Shaan";
  int length, j;

  length = 0;
  while (s1[length] != '\0') {
    ++length;
  }

  for (j = 0; s2[j] != '\0'; ++j, ++length) {
    s1[length] = s2[j];
  }

  s1[length] = '\0';

  printf("After concatenation: ");
  puts(s1);

  return 0;
}
