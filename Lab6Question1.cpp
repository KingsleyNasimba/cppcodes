#include <iostream>
#include <string>

using namespace std;

int main() {
    // Allocates an integer dynamically 
    int* dynamicInteger = new int;
    cout << "Enter the value of an integer: ";
    cin >> *dynamicInteger;

    // Allocates a string dynamically
    string* dynamicString = new string;
    cout << "Enter a string value: ";
    cin >> *dynamicString;

    // Output the dynamically allocated integer and string to the console
    cout << "Dynamically allocated integer: " << *dynamicInteger << endl;
    cout << "Dynamically allocated string: " << *dynamicString << endl;

    // Deallocate the memory
    delete dynamicInteger;
    delete dynamicString;

    return 0;
}