#include <stdio.h>

/* Errors
  * (line 12) double n2 = n * n -> missing a trailing semicolon ";" -> syntax error
  * (line 17) int value = 42 -> missing a trailing semicolon ";" -> syntax error
  * (line 13) incorrect return value "n", should be n2 -> logical error
  * (line 19) incorrect format specifier for double, should be %f-> runtime error / undefined?
*/

// this function takes a double n and returns n multiplied by itself 
double my_function(double n){
  double n2 = n*n;
  return n2;
}

int main(void) {
  int value = 42;
  double processed_value = my_function(value);
  printf("The initial value was %d", value); 
  printf(" and the processed value is %f\n", processed_value);
  return 0;
} 
