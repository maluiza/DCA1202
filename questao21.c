#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "gc.h"

int main(){
  int i;
  int ** v;
  clock_t t;
  t = clock();
  GC_INIT();

  for (i = 0; i < 10000000; i++)
   {
     int **p = (int **) GC_MALLOC(sizeof(int *));
     int *q = (int *) GC_MALLOC_ATOMIC(sizeof(int));
     assert(*p == 0);
     *p = (int *) GC_REALLOC(q, 4*sizeof(int));
     if (i % 100000 == 0)
     printf("Heap size = %d\n", GC_get_heap_size());
   }

  t = clock() - t;
  printf("1º tempo calculado -> %f \n", (float)t/CLOCKS_PER_SEC);

  t = clock();
  v = (int **)malloc(1000*sizeof(int *));
  v[0] = (int *)malloc(1000*10000*sizeof(int));

  t = clock() - tempo;
  printf("2º tempo calculado -> %f \n",(float)t/CLOCKS_PER_SEC);
}
