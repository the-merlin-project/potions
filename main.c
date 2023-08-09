#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

void makechr(char *path, unsigned int mode) {
  struct stat st = {0};
  if (stat(path, &st) == -1) {
    mkdir(path, mode);
  }
}

int main() {
  makechr("./chrootz", 0700);
}
