#include <stdio.h>

int main(int argc, char** argv) {
  // argc: number of command line arguments
  // argv: pointer to array of length argc storing
  //       pointers to command line arguments

  // print all command line arguments
  int i;
  for (i = 0; i < argc; ++i) {
    printf("%s\n", *(argv + i));
  }
  return 0;
}
