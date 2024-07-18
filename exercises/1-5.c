/**
 * Exercise 1-5. Modify the temperature conversion program to print the table in reverse order, that is, from 300
 * degrees to 0.
 */

#include <stdio.h>

int main(void) {
  // heading for the table
  printf("----------\n");
  printf("%3c %6c\n", 'F', 'C');
  printf("----------\n");

  for (float fahr = 300; fahr >= 0; fahr -= 20) {
    float celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
  }
}
