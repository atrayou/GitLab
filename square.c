#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if(argc != 2) {
    fprintf(stderr, "format: ./square <number>\n");
    exit(EXIT_FAILURE);
  }
  int nb = 0;
  sscanf(argv[1], "%d", &nb);
  if(nb == 0) {
    fprintf(stderr, "Enter a positive number\n");
    exit(EXIT_FAILURE);
  }
  printf("Square: %d\n", nb * nb);
  return EXIT_SUCCESS;
}