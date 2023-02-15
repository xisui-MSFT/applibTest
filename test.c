#include <stdlib.h>

int main(int argc, char **argv) {
  if (argc == 2 && atoi(argv[1]) == 0) {
    exit(0);
  } else {
    exit(1);
  }
}
