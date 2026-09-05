#include "kernel/types.h"
#include "user/user.h"

void
clear(void) {
  printf("\x1b[H\x1b[2J\x1b[3J");
}

int
main(void) {
  clear();
}
