#include <stdio.h>
//function declaration
void subfun();
int main()
{
subfun();
subfun();
subfun();
return 0;
}
//function definition
void subfun()
{
static int st = 1;  //static variable declaration
printf("\nst = %d ", st);
st++;
}