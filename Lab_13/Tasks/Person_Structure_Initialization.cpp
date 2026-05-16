// Lab 13 Task: Person Structure Initialization
// Name: [Muhammad Adil]
// Registration Number: [BF25NWELE0669]

#include <iostream>
#include <string>

using namespace std;

struct Person {
    string name;    // person's name
    int age;        // person's age
    string address; // person's address
};

int main() {
    Person person1 = {"Zawar Shah", 20, "Peshawar, Pakistan"}; // initialize structure with values

    cout << "Person Information:" << endl;
    cout << "Name: " << person1.name << endl;     // display name
    cout << "Age: " << person1.age << endl;       // display age
    cout << "Address: " << person1.address << endl; // display address

    return 0; // successful termination
}

