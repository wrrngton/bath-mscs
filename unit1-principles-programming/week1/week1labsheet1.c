#include <stdio.h>

void printHelloWorld(void);
void printXTenTimes(void);
void convertMetricToImperialHeights(void);
void fibonacci(void);
void volumeOfACylinder(void);

int main(void) {
  printf("Question 1\n");
  printHelloWorld();

  printf("\nQuestion 2\n");
  printXTenTimes();

  printf("\nQuestion 3\n");
  convertMetricToImperialHeights();

  printf("\nQuestion 4\n");
  fibonacci();

  printf("\nQuestion 5\n");
  volumeOfACylinder();
  return 0;
}

/* 
 * Lab Sheet 1:
 */

 /* Question 1: 
 
 Adapt the “HelloWorld” code below to produce a program that defines a variable capable of holding an integer of your choice. The program should add 3 to that number, multiply the result by 2, subtract 4, subtract twice the original number, add 3, then print the result and a new line.
 */
 
void printHelloWorld(void){
  int original_num = 6;
  int my_var = original_num;
  my_var = my_var + 3;
  my_var = my_var * 2;
  my_var = my_var - 4;
  my_var = my_var - (original_num * 2);
  my_var = my_var + 3;
  printf("%d\n", my_var);
}

 /* Question 2: 
 
 Complete the function below so that it prints every integer from x to x + 10.  Do not use loops. 
 
 Call this function from the main to test your program.
 */

void printXTenTimes(void){
  int x = 0;
  printf("%d\n", x + 1);
  printf("%d\n", x + 2);
  printf("%d\n", x + 3);
  printf("%d\n", x + 4);
  printf("%d\n", x + 5);
  printf("%d\n", x + 6);
  printf("%d\n", x + 7);
  printf("%d\n", x + 8);
  printf("%d\n", x + 9);
  printf("%d\n", x + 10);
}

 /* Question 3: 
 
 Complete the function below so that it converts the height of a person from centimetres to feet and inches. Use integer division (rounding down is acceptable, which is the default for integer division). 
 
 Hint: 254 cm is exactly 100 inches and 12 inches is exactly 1 foot. 
 
 Call this function from the main to test your program.  For example you could test your program with the follow five values, where "?" replaced with the true value.

 101 cm is 3 feet 3 inches to the nearest inch.
 3 cm is 0 feet 1 inches to the nearest inch.
 15 cm is ? feet ? inches to the nearest inch.
 192 cm is ? feet ? inches to the nearest inch.
 124 cm is ? feet ? inches to the nearest inch.
 */

void convertMetricToImperialHeights(void){
  int height_in_cm = 192;
  int inches = height_in_cm * 0.393701;
  int feet = inches / 12;
  int remaining_inches =  inches % 12;
  printf("%d cm is %d feet %d inches to the nearest inch", height_in_cm, feet, remaining_inches);
}

 /* Question 4: 
 
 Complete the function below so that it uses three variables (current, previous, next) to calculate and print out the first ten numbers of the Fibonacci sequence, each on a new line: i.e. the first four lines should be as follows:

 0 
 1 
 1 
 2
 
 Call this function from the main to test your program.
 */

 void fibonacci(void){
  int current = 0;
  int previous;
  int next;

  int i;
  for (i = 0; i < 10; i++) {
      
      if (i == 0) {
          next = current + 1;
          printf("%d\n", current);
          previous = current;
          current = next;
      } else {
        next = previous + current;
        printf("%d\n", current);
        previous = current;
        current = next;
      }
  }

 }

 /* Question 5: 
 
 Complete the function below so that it uses two variables: height and radius. Use these two variables and print to the screen, the volume of a cylinder. 

 Call this function from the main to test your program.  For example, you could test your program with the following values, 

 height 7.0cm and radius 4.0cm
 height 20.0cm and radius 3.0cm
 height 14.7cm and radius 5.2cm
 
 Which print out, the cylinder with height 7.0cm and radius 4.0cm has a volume of 351.86cm^3
 
*/

void volumeOfACylinder(void){
  float height = 7.0;
  float radius = 4.0;
  float pi = 3.14159265359;

  float volume = ((radius * radius) * pi) * height;

  printf("the cylinder with height %.2fcm and radius %.2fcm has a volume of %.2fcm^3", height, radius, volume);
}
