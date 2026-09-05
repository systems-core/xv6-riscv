#include "../kernel/types.h"
#include "../kernel/fcntl.h"
#include "user.h"


int main(int argc, char *argv[]) {
  int i;
  int fd;

  if (argc <= 1) {
    fprintf(2, "touch: missing file operand\n");
    exit(1);
  }

  for (i = 1; i < argc; i++) {
    if ((fd = open(argv[i], O_CREATE)) < 0) {
      fprintf(2, "could'nt create new file %s\n", argv[i]);
      exit(1);
    }
    close(fd);
  }
}
