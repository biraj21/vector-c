#include <stdio.h>
#include <stdlib.h>

#include "./vector.h"

int main(void) {
  struct Vector *vec = vector_init(sizeof(int), 0);
  if (vec == NULL) {
    fprintf(stderr, "vector_init() failed\n");
    return 1;
  }

  printf("vector initialized. length: %zu, capacity: %zu, element size: %zu\n",
         vector_length(vec), vector_capacity(vec), vector_elem_size(vec));

  for (int i = 0; i < 10; i++) {
    int double_of_i = i * 2;
    if (!vector_push(vec, &double_of_i)) {
      fprintf(stderr, "vector_push() failed\n");
      return 1;
    }
  }

  printf("pushed 10 elements to the vector. vector length: %zu\n",
         vector_length(vec));

  vector_pop(vec);
  printf("popped an element from the vector. vector length: %zu\n",
         vector_length(vec));

  puts("printing elements in the vector...");
  for (size_t i = 0; i < vector_length(vec); i++) {
    int *element = vector_get(vec, i);
    printf("  %zu:  %2d\n", i, *element);
  }

  puts("setting element at index 3 to 21...");
  int twenty_one = 21;
  vector_set(vec, 3, &twenty_one);
  printf("element at index 3: %d\n", *((int *)vector_get(vec, 3)));

  vector_clear(vec);
  printf("cleared the vector. vector length: %zu\n", vector_length(vec));

  vector_free(vec);
  return 0;
}