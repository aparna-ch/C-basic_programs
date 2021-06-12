#include <stdio.h>

int main()

{

register int i = 10;

int *p = &i; //error: address of register variable requested

printf("Value of i: %d", *p);

printf("“Address of i: %u", p);

}

