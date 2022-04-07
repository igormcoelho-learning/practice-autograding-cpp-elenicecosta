#pragma once // prevents multiple definitions

#include <iostream> // print library

#include <stdio.h>

// Exercise 1: implements function 'add', that adds two numbers
int add(int a, int b);

// Exercise 2: implements function 'mul', that multiplies two numbers
int mul(int a, int b);

// ===============
// implementations

int add (int a, int b);

int main()

{
  int a = 3, b = 4, sum = 0;
  
  sum = add (a,b);
  
  printf ("Sum: %d\n", sum);
  return 0;
}

int add (int a, int b)
{ 
  return a+b;
}

// Exercise 2: implements function 'mul', that multiplies two numbers
int mul(int a, int b)
{
      return a*b;
}

int main (int argc, char** argv)
{
  std::cout << mul (5,3);
  std::cin.get();
  return 0;
}
