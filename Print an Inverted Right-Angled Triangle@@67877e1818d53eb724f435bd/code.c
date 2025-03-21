#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n); // Read the number of rows

  for (int i = n; i >= 1; i--) { // Loop from n down to 1 (for each row)
    for (int j = 1; j <= i; j++) { // Loop to print stars in each row
      printf("*");
    }
    printf("\n"); // Move to the next line after printing a row
  }

  return 0;
}
