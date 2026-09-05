#include "kernel/types.h"
#include "user/user.h"

void
clear(void) {
  printf("hello, world\n");
}

int
main(void) {
  clear();
}
