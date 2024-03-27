#include <iostream>

class BankAccount {
private:
    double balance; // Số dư trong tài khoản

public:
    // Constructor
    BankAccount(double initialBalance) : balance(initialBalance) {
        // Invariant: Số dư không bao giờ âm
        if (initialBalance < 0) {
            std::cerr << "Error: Initial balance cannot be negative!" << std::endl;
            balance = 0; // Khởi tạo số dư là 0 nếu số dư ban đầu âm
        }
    }

    // Destructor
    ~BankAccount() {
        // Invariant: Không cần thêm điều kiện đặc biệt cho destructor
    }

    // Phương thức rút tiền
    void withdraw(double amount) {
        // Invariant: Số dư không bao giờ âm
        if (amount <= balance) {
            balance -= amount;
        } else {
            std::cerr << "Error: Insufficient funds!" << std::endl;
        }
    }

    // Phương thức gửi tiền
    void deposit(double amount) {
        // Invariant: Không có điều kiện đặc biệt cho phương thức này
        balance += amount;
    }

    // Phương thức lấy số dư
    double getBalance() const {
        // Invariant: Không có điều kiện đặc biệt cho phương thức này
        return balance;
    }
};

int main() {
    BankAccount myAccount(10); // Tạo tài khoản với số dư ban đầu là 100

    // Rút tiền và kiểm tra số dư
    myAccount.withdraw(50);
    std::cout << "Current balance: " << myAccount.getBalance() << std::endl;

    // Gửi tiền và kiểm tra số dư
    myAccount.deposit(200);
    std::cout << "Current balance: " << myAccount.getBalance() << std::endl;

    return 0;
}
