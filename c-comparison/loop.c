#include <time.h>
#include <stdio.h>
#include <stdlib.h>



int rangefoldplus(int limit) {
  int sum = 0;
  int i = 0;
  while (i < limit) {
    sum += i;
    i += 1;
    asm("");
  }
  return sum;
}


int main(int argc, char *argv[]) {
  clock_t begin, end;
  int sum;
  int limit;
  int* array = NULL;

  sscanf(argv[1], "%d", &limit);

  begin = clock();
  sum = rangefoldplus(limit);
  end = clock();
  printf("time: %lu\n", end - begin);
  printf("result: %d\n", sum);
  return sum;
}





