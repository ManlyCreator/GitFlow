#include <stdio.h>

int main(int argc, char** argv) {
  if (!argv[1]) {
    printf("Usage: ./main <name>\n");
    return 1;
  }
  printf("Hello, %s\n", argv[1]);
  return 0;
}
