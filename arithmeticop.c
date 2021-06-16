//C program to show arithmetic operators

#include <stdio.h>
int main()
{
 int a, b, c;
 printf("Enter the two integer inputs");
 scanf("%d %d", &a,&b);
 c = a + b;
 printf("Line 1 - Value of c is %d\n", c );
c = a - b;
 printf("Line 2 - Value of c is %d\n", c );
 c = a * b;
 printf("Line 3 - Value of c is %d\n", c );
 c = a / b;
 printf("Line 4 - Value of c is %d\n", c );
 c = a % b;
 printf("Line 5 - Value of c is %d\n", c );
 c = a++;
 printf("Line 6 - Value of c is %d\n", c );
 c = a--;
 printf("Line 7 - Value of c is %d\n", c );
 
return 0;
}

