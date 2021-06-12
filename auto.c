#include <stdio.h>

int main( )

{

auto int i = 11;

{

auto int i = 22;

{

auto int i = 33;

printf ( "%d ", i);

}

printf ( "%d ", i);

}

printf( "%d ", i);

}