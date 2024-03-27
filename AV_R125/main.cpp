#include <iostream>
#include <string>

std::string getWelcomeMessage(const std::string& name) {
    std::string welcomeMsg = "Hello, " + name + "!"; // Tạo ra một đối tượng chuỗi tạm thời không cần thiết
    return welcomeMsg;
}

int main() {
    std::string userName = "John";
    std::string welcomeMessage = getWelcomeMessage(userName);
    std::cout << welcomeMessage << std::endl;
    return 0;
}
