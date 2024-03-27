#include <iostream>
#include <cstdint>

uint32_t swap_endian(uint32_t num) {
    return ((num >> 24) & 0xFF) |           // Lấy byte cao nhất và đưa xuống vị trí thấp nhất
           ((num >> 8) & 0xFF00) |          // Di chuyển byte thứ hai đến vị trí thứ ba
           ((num << 8) & 0xFF0000) |        // Di chuyển byte thứ ba đến vị trí thứ hai
           ((num << 24) & 0xFF000000);      // Lấy byte thấp nhất và đưa lên vị trí cao nhất
}

int main() {
    uint32_t num = 0x12345678;  // Số nguyên 305419896 (thập phân)

    std::cout << "Original number: " << std::hex << num << std::endl;

    // Chuyển đổi endian
    uint32_t swapped_num = swap_endian(num);

    std::cout << "Swapped number: " << std::hex << swapped_num << std::endl;

    return 0;
}
