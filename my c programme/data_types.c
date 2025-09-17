// The Data type specifies the data size and the type of information the variable will store. 

// the char types

// #include <stdio.h>

// int main(){
//     char mygrade='A';
//     printf("My Grade : %c", mygrade);
//     return 0;
// }

// 2

// #include <stdio.h>
 
// int main(){
//     char a=60;
//     char b=80;
//     char c=10;
//     printf("first : %d\n",a);
//     printf("second : %d\n",b);
//     printf("third : %d\n",c);
//     return 0;
// }

// double vs float

// #include <stdio.h>

// int main(){
// float ram=1000.1088888888888;
// double shyam=5000.3333333333333;

// printf("pass: %f\n",ram);
// printf("false: %1f",shyam);
// return 0;
// }

// scientific Notation

// #include<stdio.h>

// int main(){
//     float f1=10e5;
//     double d2=14E9;

//     printf("first: %f\n",f1);
//     printf("second: %1f",d2);
//     return 0;

// }

// MEMORY SiZE


// #include <stdio.h>

// int main() {
//   int myInt;
//   float myFloat;
//   double myDouble;
//   char myChar;
 
//   printf("%zu\n", sizeof(myInt));
//   printf("%zu\n", sizeof(myFloat));
//   printf("%zu\n", sizeof(myDouble));
//   printf("%zu\n", sizeof(myChar));
  
//   return 0;
// }

// EXAMPLES

#include <stdio.h>

int main() {
  // Create variables of different data types
  int Boll = 50;
  float Price_per_Boll = 9.99;
  float total_cost = Boll * Price_per_Boll ;
  char currency = '$';

  // Print variables
  printf("Number of items: %d\n", Boll);
  printf("Cost per item: %.2f %c\n", Price_per_Boll,currency);
  printf("Total cost = %.2f %c\n", total_cost, currency);

  return 0;
}