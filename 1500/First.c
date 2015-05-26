
#include <stdio.h>

int main()
{
  int number;

  printf( "Please enter a number: " );
  scanf( "%d", &number );
  printf( "You entered %d", number );
  int changes;
  changes = number*2;
  printf ("The number, doubled %d", changes);
  getchar();
  return 0;
}
