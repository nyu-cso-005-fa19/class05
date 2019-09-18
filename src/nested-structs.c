struct T {
  int x;
  int y;
};

struct S1 {
  struct T t;
  int z;
};

struct S2 {
  struct T* pt;
  int z;
};

int main() {
  struct T t = { 1, 2 };
  struct S1 s1 = { t, 3 };
  struct S2 s2 = { &t, 3 };

  return 0;
}
