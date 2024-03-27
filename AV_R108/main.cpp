#include <iostream>
#include <cstdarg>

int sum(int count, ...) {
    va_list args;
    va_start(args, count);
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += va_arg(args, int);
    }
    va_end(args);
    return sum;
}

int main() {
    std::cout << sum(1, 2, 3) << std::endl;
    return 0;
}

// Unspecified number of arguments
float vector_length (float x, float y, ...); // Error prone
// Function overloading
float vector_length (float x, float y);
float vector_length (float x, float y, float z);
float vector_length (float x, float y, float z, float w);
// Default parameters
float vector_length (float x, float y, float z=0, float w=0);
