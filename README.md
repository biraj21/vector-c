# Generic Vector implementation in C

This is a generic vector implementation in C. It is a simple implementation of a dynamic array that can store any type of data. The vector is implemented as a struct that contains a pointer to the data, the size of the vector, the capacity of the vector, and the size of the data type. The data is stored as a void pointer, so it can be any type of data.

The vector has the following functions:

- `vector_init`: Initializes the vector with a given element size and capacity.
- `vector_push`: Adds an element to the end of the vector.
- `vector_pop`: Removes the last element from the vector and returns a pointer to it.
- `vector_get`: Returns a pointer to the element at the given index.
- `vector_set`: Sets the element at the given index to the given value.
- `vector_clear`: Removes all elements from the vector. Does not free the memory.
- `vector_data`: Return the data pointer of the vector.
- `vector_length`: Returns the number of elements in the vector.
- `vector_capacity`: Returns the capacity of the vector.
- `vector_elem_size`: Returns the size of the elements in the vector.
- `vector_free`: Frees the memory used by the vector.

## How to run

There's a simple test program in _src/main.c_ that demonstrates the usage of the vector. To run the test program, follow these steps:

1. Clone the repository

2. Compile the code

```bash
make
```

3. Run the code

```bash
./bin/vector
```
