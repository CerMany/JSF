#include <iostream>
#include <algorithm> // For std::max_element

template<typename T>
T find_max(const T* array, size_t size) {
    T max_val = *std::max_element(array, array + size);
    return max_val;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    double arr2[] = {2.5, 6.7, 3.8, 9.2, 1.1};

    std::cout << "Max value in arr1: " << find_max(arr1, 5) << std::endl;
    std::cout << "Max value in arr2: " << find_max(arr2, 5) << std::endl;

    return 0;
}
