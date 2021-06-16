// C program to show the relational operators in C
#include <stdio.h>
int main()
{
 int a, b, c;
 printf("Enter the two integer inputs");
 scanf("%d %d", &a,&b);
 if( a == b )
 {
 printf("Line 1 - a is equal to b\n" );
 }
 else
 {
 printf("Line 1 - a is not equal to b\n" );
 }
 if ( a < b )
 {
 printf("Line 2 - a is less than b\n" );
 }
 else
 {
 printf("Line 2 - a is not less than b\n" );
 }
 if ( a > b )
 {
 printf("Line 3 - a is greater than b\n" );
 }
 else
 {
 printf("Line 3 - a is not greater than b\n" );
 }
if ( a >= b )
 {
 printf("Line 3 - a is greater than or equal to b\n" );
 }
 else
 {
 printf("Line 3 - a is not greater than or equal to b\n" );
 }
return 0;

}
