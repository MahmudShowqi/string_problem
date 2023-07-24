#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;
    std::string address;

public:
    Student() {
        name = "unknown";
        age = 0;
        address = "not available";
    }

    void setInfo(std::string newName, int newAge) {
        name = newName;
        age = newAge;
    }

    void setInfo(std::string newName, int newAge, std::string newAddress) {
        name = newName;
        age = newAge;
        address = newAddress;
    }

    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Address: " << address << std::endl;
        std::cout << "---------------------------" << std::endl;
    }
};

int main() {
    Student students[10];  // Array of 10 Student objects

    // Set information for each student
    students[0].setInfo("John Doe", 20, "123 Main St");
    students[1].setInfo("Jane Smith", 22, "456 Elm St");
    students[2].setInfo("Michael Johnson", 19, "789 Oak St");
    // ...

    // Display information for each student
    for (int i = 0; i < 10; i++) {
        std::cout << "Student " << i+1 << std::endl;
        students[i].displayInfo();
    }

    return 0;
}
