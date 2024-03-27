#ifndef EXAMPLE_H
#define EXAMPLE_H
// example.h

// Inline function definition
inline int add(int a, int b) {
    return a + b;
}

// Template definition
template<typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

#endif // EXAMPLE_H

