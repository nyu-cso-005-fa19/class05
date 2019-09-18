#include <stdlib.h>
#include <assert.h>

int* make_array(int n) {
  int* a = malloc(n * sizeof(int));

  if (a == NULL) assert(0);

  return a;
}

int main() {
  int* a = make_array(10); 

  a[0] == 1;

  free(a);

  // pointer `a` is "dangling" (no longer valid)
}
