#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Constructor
    Person(const std::string& name, int age) : name(name), age(age) {}

    // Getter methods
    std::string getName() const { return name; }
    int getAge() const { return age; }

//private:
    // Từ chối hàm gán
   // Person& operator=(const Person& other);
};

int main() {
    Person person1("John", 30);
    Person person2("Alice", 25);

    // Attempting to use the assignment operator (which is disallowed)
    person1 = person2; // This line will result in a compile-time error

    return 0;
}
