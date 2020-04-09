// gcc lvl09.c && ./a.out `cat token`
#include <stdio.h>

int main (int argc, char **argv)
{
  if (argc != 2)
    return (-1);

  int i = 0;
  while (i < 25)
  {
    printf ("%c", argv[1][i] - i);
    i++;
  }
  return (0);
}
