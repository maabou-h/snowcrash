// gcc lvl09.c && ./a.out `cat token`
#include <stdio.h>

int main (int argc, char **argv)
{
  int i = 0;

  while (++i < 25)
    printf ("%c", argv[1][i] - i);
  return (0);
}
