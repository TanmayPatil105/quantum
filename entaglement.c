#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int
main (int   argc,
      char *argv[])
{
  int a, b;

  srand (time (NULL));

  a = rand ();
  b = a + 1;

  if ((a % 2) == 0)
    {
      printf ("A is even therefore B is odd\n");
    }
  else
    {
      printf ("A is odd therefore B is even\n");
    }

  return 0;
}
