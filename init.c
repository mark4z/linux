/* main.c */
#include <stdio.h>
#include <unistd.h>

void main() {
  while (1) {
    printf("Hello World\n");
    fflush(stdout);
    sleep(1);
  };
}
