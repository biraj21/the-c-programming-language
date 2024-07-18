/**
 * Exercise 1-2. Experiment to find out what happens when prints's argument string contains \c, where c is some
 * character not listed above.
 */

#include <stdio.h>

int main(void) {
  // the ones that are commented out are invalid escape sequences

  printf("\a\\ahello, world!\n"); // alert sound - didn't work
  printf("\\bhe\bllo, world!\n"); // backspace - moves the curser one position back
  // printf("\d\\dhello, world!\n");
  // printf("\e\\ehello, world!\n");
  printf("\f\\fhello, world!\n"); // form feed - historically used in printers to advance to the next page
  // printf("\g\\ghello, world!\n");
  // printf("\h\\hhello, world!\n");
  // printf("\i\\ihello, world!\n");
  // printf("\j\\jhello, world!\n");
  // printf("\k\\khello, world!\n");
  // printf("\l\\lhello, world!\n");
  // printf("\m\\mhello, world!\n");
  printf("\n\\nhello, world!\n"); // new line - we all know that
  // printf("\o\\ohello, world!\n");
  // printf("\p\\phello, world!\n");
  // printf("\q\\qhello, world!\n");
  printf("\\rhe\rllo, world!\n"); // carriage return - moves the cursor to the beginning of the current line
  // printf("\s\\shello, world!\n");
  printf("\t\\thello, world!\n");
  printf("\u00A9\\u00A9hello, world!\n");
  printf("\v\\vhello, world!\n");
  // printf("\w\\whello, world!\n");
  printf("\x41\\x41hello, world!\n");
  // printf("\y\\yhello, world!\n");

  return 0;
}
