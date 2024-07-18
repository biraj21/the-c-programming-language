/**
 * Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.
 */

#include <stdio.h>

int main(void) {
  float lower = -17.8; // lower limit of temperature scale
  float upper = 148.9; // upper limit
  float step = 11.1;   // step size

  // heading for the table
  printf("----------\n");
  printf("%6c %3c\n", 'C', 'F');
  printf("----------\n");

  float celsius = lower;
  float fahr = 0;
  while (celsius <= upper) {
    fahr = (9.0 / 5.0) * celsius + 32.0;
    printf("%6.1f %3.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
