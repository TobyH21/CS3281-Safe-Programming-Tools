#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char *argv[])
{
  char buffer[5];
  sprintf(buffer,"here is the message \n");

  printf("%s\n",buffer);
  return 0;
}
