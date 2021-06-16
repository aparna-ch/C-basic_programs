/*To get the exact size of a type or a variable on a particular platform, you can use
the sizeof operator*/

#include <stdio.h>
#include <limits.h>
int main()
{
 printf("Storage size for int : %d \n", sizeof(int));
 printf("Storage size for float : %d \n", sizeof(float));
 printf("Storage size for char : %d \n", sizeof(char));
 printf("Storage size for double : %d \n", sizeof(double));
 printf("Storage size for void : %d \n", sizeof(void));

 return 0;
}
