#include <iostream>

using namespace std; 

int main() {
    int integer;

    // Prompt the user to enter an integer between 5 and 10 
    do {
        cout << "Please enter an integer value between 5 and 10: ";
        cin >> integer;

        // Check if the integer entered is between 5 and 10
        if (integer >= 5 && integer <= 10) {
            cout << "Your input value (" << integer << ") has been accepted." << endl;
            break; //exit the iteration if condition is not satisfied
        } else {
            cout << "Invalid input. Please enter a value between 5 and 10." << endl;
            cout << "You entered " << integer << ". Please enter a number between 5 and 10." << endl;
        }
    }
     while (true); // proceed the iteration until a valid integer is entered

    return 0;
}
