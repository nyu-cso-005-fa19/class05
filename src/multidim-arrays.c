#include <stdio.h>

#define N 3
#define M 2

int main() {
  int a[N][M] = { 1, 2, 3, 4, 5, 6 };

  int x = a[1][0]; // sets x to 3
  int y = a[2][1]; // sets x to 6
  int z = *(*(a + 2) + 1); // equivalent to a[2][1]

  printf("x: %d, y: %d, z: %d\n", x, y, z);
}
