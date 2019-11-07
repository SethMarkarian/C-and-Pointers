#include <stdio.h>
#include <stdlib.h>

/*
  int y;
  int x = 5;
  int *p = &x;
  char buf[200];
*/

int main() {

  int y;
  int x = 5;
  int *p = &x;
  char buf[200];

  y = *p;

  printf( "the value of x is %d\n", x );
  printf( "the value of y is %d\n", y );

  printf( "the address of the variable x is 0x%X\n", &x );
  printf( "the address of the variable y is 0x%X\n", &y );

  printf( "the value of the pointer p is the address 0x%0X\n", p );
  printf( "the address of the variable p is 0x%0X\n", &p );
  printf( "the value at the address pointed to by p is %i\n", *p );

  *p = y + *p;
  p = &y;
  *p = x + *p;
  
  sprintf( buf, "the address of the variable x is 0x%X and its value is %d\n", &x, x);
  printf( "%s", buf );

  char *q;
  q = buf;
  sprintf( q, "the address of the variable y is 0x%X and its value is %d\n", &y, y );
  printf( "%s", q );

  q = &buf[0];
  sprintf( q, "the value of the pointer p is the address 0x%0X; its address is 0x%0X and the value it points to is %i\n", p, &p, *p );
  printf( "%s", q );

  sprintf( q, "the value of the pointer q is the address 0x%0X\n", q );
  printf( "%s", q );

  printf( "the memory address of main() is: 0x%0X\n", &main );
  
  return( 0 );
}
