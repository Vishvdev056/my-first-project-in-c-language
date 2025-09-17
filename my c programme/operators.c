// #include <stdio.h>

// int main()
// {
//     int sum1 = 105 + 205;
//     int sum2 = sum1 + 400;
//     int sum3 = sum1+sum2;

//     printf()
// }

// Arithmetic Operators

// #include <stdio.h>
// int main()
// {
//     int a = 54;
//     int b = 8;

//     printf("a+b=%d\n", a+b);
//     printf("a-b=%d\n", a-b);
//     printf("a*b=%d\n", a*b);
//     printf("a/b=%d\n", a/b);
//     printf("--b=%d\n", --b);
//     printf("++a=%d\n", ++a);
//     printf("a%b=%d\n", a%b);
// return=0;

// }

// Relational Operator

// #include <stdio.h>
// int main()
// {
//     int a = 54;
//     int b = 8;

//     printf("a=b:%d\n", a == b);
//     printf("a!=b:%d\n", a != b);
//     printf("a>b:%d\n", a > b);
//     printf("a<b:%d\n", a < b);
//     printf("a>=b:%d\n", a >= b);
//     printf("b<=a:%d\n", a <= b);
//     return 0;
// }

// Logical operator

// #include <stdio.h>

// int main() {
//     int x = 12;
//     int y = 3;

//     // Logical AND (&&) → true only if both conditions are true

//     printf("x > 3 && x < 10 : %d\n", x > 3 && x < 10);   
//     printf("x > 3 && y < 10 : %d\n", x > 3 && y < 10);   

//     // Logical OR (||) → true if at least one condition is true

//     printf("x > 3 || x < 10 : %d\n", x > 3 || x < 10);  
//     printf("x < 3 || y < 2  : %d\n", x < 3 || y < 2);    

//     // Logical NOT (!) → reverses the result

//     printf("!(x > 3)        : %d\n", !(x > 3));          
//     printf("!(y < 2)        : %d\n", !(y < 2));         

//     return 0;
// }


// Assignment Operator

#include <stdio.h>

int main() {
    int a = 10;

    printf("Initial value of a : %d\n", a);

    a = 10;  
    a += 5;  
    printf("a += 5 : %d\n", a);

    a = 10;  
    a -= 3;  
    printf("a -= 3 : %d\n", a);

    a = 10;  
    a *= 2;  
    printf("a *= 2 : %d\n", a);

    a = 10;  
    a /= 4;  
    printf("a /= 4 : %d\n", a);

    a = 10;  
    a %= 4;  
    printf("a %%= 4 : %d\n", a);

    return 0;
}


// Bitwise Operator

