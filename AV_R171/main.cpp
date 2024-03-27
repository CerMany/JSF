#include <stdio.h>

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {6, 7, 8, 9, 10};
    int *ptr1 = arr1;
    int *ptr2 = arr2;

    if (ptr1 < ptr2) { // Đúng: so sánh con trỏ trỏ đến các mảng khác nhau
        printf("ptr1 points to an address before ptr2\n");
    } else {
        printf("ptr1 points to an address after or same as ptr2\n");
    }

    int *ptr3 = &arr1[3];
    int *ptr4 = &arr1[4];

    if (ptr3 < ptr4) { // Đúng: so sánh con trỏ trỏ đến các phần tử trong cùng một mảng
        printf("ptr3 points to an address before ptr4\n");
    } else {
        printf("ptr3 points to an address after or same as ptr4\n");
    }

    return 0;
}
