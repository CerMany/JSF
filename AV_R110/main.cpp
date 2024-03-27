#include <iostream>

using namespace std;

struct PersonInfo {
    string name;
    int age;
    string address;
    string city;
    string country;
    string email;
    string phone;
};

class Person {
public:
    Person(const PersonInfo& info);

    void displayInfo() const {
        cout << "Name: " << info.name << endl;
        cout << "Age: " << info.age << endl;
        cout << "Address: " << info.address << endl;
        cout << "City: " << info.city << endl;
        cout << "Country: " << info.country << endl;
        cout << "Email: " << info.email << endl;
        cout << "Phone: " << info.phone << endl;
    }

private:
    PersonInfo info;
};

Person::Person(const PersonInfo& info) : info(info) {}

int main() {

    PersonInfo info{"John ", 30, "123 ABC", "Anytown", "USA", "john@example.com", "123456"};
    Person person(info);

    person.displayInfo();

    return 0;
}
