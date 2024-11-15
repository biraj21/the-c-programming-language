/**
 * Exercise 1-3. Modify the temperature conversion program to print a heading above the table.
 */

#include <stdio.h>

/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */
int main(void) {
  float lower = 0;   // lower limit of temperature scale
  float upper = 300; // upper limit
  float step = 20;   // step size

  // heading for the table
  printf("----------\n");
  printf("%3c %6c\n", 'F', 'C');
  printf("----------\n");

  float fahr = lower;
  float celsius;
  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
