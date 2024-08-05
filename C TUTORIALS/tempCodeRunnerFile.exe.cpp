#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Public methods to access and modify private members
    void setName(const std::string& newName) {
        name = newName;
    }

    std::string getName() const {
        return name;
    }

    void setAge(int newAge) {
        if (newAge >= 0) {
            age = newAge;
        } else {
            std::cout << "Invalid age input. Age must be non-negative." << std::endl;
        }
    }

    int getAge() const {
        return age;
    }

    // Constructor to initialize data members
    Person(const std::string& initialName, int initialAge) {
        name = initialName;
        if (initialAge >= 0) {
            age = initialAge;
        } else {
            std::cout << "Invalid age input. Age must be non-negative." << std::endl;
            age = 0; // Default age
        }
    }

    // Destructor
    ~Person() {
        std::cout << "Destructor called for " << name << std::endl;
    }
};

int main() {
    // Creating an object of the Person class
    Person person1("John Doe", 25);

    // Accessing and modifying private members through public methods
    std::cout << "Name: " << person1.getName() << ", Age: " << person1.getAge() << std::endl;

    person1.setName("Jane Doe");
    person1.setAge(30);

    std::cout << "Name: " << person1.getName() << ", Age: " << person1.getAge() << std::endl;

    return 0;
}
