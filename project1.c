/*
  project1.c

  This program calculates and prints factorials and second, third, 
  and fifth powers of some nummbers.
 */
#include <stdio.h>

/* Problem Prototypes */
void Problem1A();
void Problem1B();
void Problem1C();
void Problem1D();
void Problem2A();
void Problem2B();
void Problem2C();
void Problem2D();


/* helper functions */
int factorial(unsigned int number);
int square(int number);
int cube(int number);
int fifthPower(int number);

int main(void)
{
  printf("\n\tSolving Problem 1A\n");
  Problem1A();

  printf("\n\tSolving Problem 1B\n");
  Problem1B();
  
  printf("\n\tSolving Problem 1C\n");
  Problem1C();

  printf("\n\tSolving Problem 1D\n");
  Problem1D();

  printf("\n\tSolving Problem 2A\n");
  Problem2A();

  printf("\n\tSolving Problem 2B\n");
  Problem2B();
  
  printf("\n\tSolving Problem 2C\n");
  Problem2C();

  printf("\n\tSolving Problem 2D\n");
  Problem2D();
  
  printf("Execution time: %.4fms", .004);
}

/***********************/
/* Problem Definitions */
/***********************/

/*
  void Problem1
  
  This function calculates and prints out the factorials for all odd numbers
  from 13 to 1 and then for all even numbers from 2 to 14.
  The numbers are iterated using a for loop.
*/
void Problem1A()
{
  puts("Factorials for odd numbers 13 to 1");
  for(unsigned int itr = 13; itr > 1; itr--) {

    // calculate and print factorial for odd iterator
    if(itr % 2 == 1) {
      printf("factorial(%d) = %d\n", itr, factorial(itr));
    }
  }

  puts("\nFactorials for even numbers 2 to 14");
  for(unsigned int itr = 2; itr < 15; itr++) {

    // calculate and print factorial for even iterator
    if(itr % 2 == 0) {
      printf("factorial(%d) = %d\n", itr, factorial(itr));
    }
  }
}

/*
  void Problem1B

  This function calculates and prints the squares of all numbers between -14 to +14.
  The numbers are iterated through using a for loop.
*/
void Problem1B()
{
  for(int itr = -14; itr < 15; ++itr) {
    printf("square(%d) = %d\n", itr, square(itr));
  }
}

/*
  void Problem1C

  This function calculates and prints the cubes of all numbers from -14 to +14.
  The numbers are iterated through using a for loop.
 */
void Problem1C()
{
  for(int itr = -14; itr < 15; ++itr) {
    printf("cube(%d) = %d\n", itr, cube(itr));
  }
}

/*
  void Problem1D

  This function calculates and prints the 5th power of all numbers from +14 to -14.
  The numbers are iterated through using a for loop.
*/
void Problem1D()
{
  for(int itr = -14; itr < 15; ++itr) {
    printf("power(%d, 5) = %d\n", itr, square(itr) * cube(itr));
  }
}

/*
  void Problem2A

  This function finds the factorial of all odd numbers from 13 to 1.
  The numbers are iterated through using a while loop.
  The results produced should be equivalent to the results of Problem1A().
 */
void Problem2A()
{
  // initialize iterator
  int itr = 13;

  while(itr > 0){ 

    printf("factorial(%d) = %d\n", itr, factorial(itr));

    // decrement iterator to next odd number
    itr = itr - 2;
  }
}

/*
  void Problem2B

  This function finds the squares of all numbers from -14 to +14.
  The numbers are iterated through using a while loop.
  The results produced should be equivalent to the resuts of Problem1B().
 */
void Problem2B()
{
  // initialize iterator
  int itr = -14;

  while(itr < 15) {
    
    printf("square(%d) = %d\n", itr, square(itr));

    // increment iterator to subsequent number
    itr = itr + 1;
  }
}

/*
  void Problem2C

  This function finds the cubes of all numbers from -14 to +14.
  The numbers are itererated through using a while loop.
  The results produced should be equivalent to the results of Problem1C().
 */
void Problem2C()
{
  // initialize iterator
  int itr = -14;

  while(itr < 15) {

    printf("cube(%d) = %d\n", itr, cube(itr));

    // increment iterator to subsequent number
    itr = itr + 1;
  }
}


/*
  void Problem2D

  This function finds the 5th power of all numbers from -14 to +14.
  The numbers are iterated through using a while loop.
  The results produced should be equivalent to the results of Problem1D().
 */
void Problem2D()
{
  // initialize iterator
  int itr = -14;

  while(itr < 15) {

    printf("power(%d, 5) = %d\n", itr, square(itr) * cube(itr));

    // increment iterator to subsequent number
    itr = itr + 1;
  }
}


/*
  int factorial 

  This function returns the factorial of a number.
  The argument 'number' is assumed to be positive.
 */
int factorial(unsigned int number)
{
  // Initialize variable that will store the result of the factorial
  int result = 1;

  for(; number > 1; --number) {
    result = result * number;
  }
  
  return result;
}

/*********************************/
/*  Helper function definitions  */
/*********************************/

/*
  int square

  This function returns the square of an integer.
  The result should always be a positive number.
 */
int square(int number)
{
  return number * number;
}

/*
  int cube

  This function returns the cube of an integer.
  The result will be negative if cubing a negative integer.
  The result will be positive if cubing a positive integer.
 */
int cube(int number)
{
  return number * number * number;
}
