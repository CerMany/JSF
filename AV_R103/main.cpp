#include <iostream>
#include <type_traits>

template<typename T>
T max_value(const T* array, size_t size) {
    static_assert(std::is_arithmetic<T>::value, "Type T must be arithmetic");

    if (size == 0) {
        throw std::invalid_argument("Array size must be greater than 0");
    }

    T max = array[0];
    for (size_t i = 1; i < size; ++i) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

template<class T, class B> struct Derived_from {
 static void constraints(T* p) { B* pb = p; }
 Derived_from() { void(*p)(T*) = constraints; }
};


int main(){

}
