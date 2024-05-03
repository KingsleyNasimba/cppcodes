#include <iostream>
using namespace std;

int main (){
    int columns, rows;

    //prompt the user to enter the number of columns of the array
    cout <<"Enter the number of columns: " << endl ;
    cin >> columns;

    //prompt the user to enter the number of rows of the array
    cout <<"Enter the number of rows: " << endl ;
    cin >> rows;

    if (columns > 3 || rows > 3){
        cout <<"Invalid input!!! The maximum dimension is 3!!!" << endl;
        return 1;
    }

    //Allocating memory for the 2D array dynamically
    double** arr = new double* [columns];
    for (int i = 0; i < columns; ++i){
        arr[i] = new double [rows];
    }

    //prompt the user to assign values to each element of the array
    double value = 1.0;
    cout << "Enter values for the array: " << endl;
    for (int i = 0; i < columns; ++i) {
        for (int j = 0; j < rows; ++j) {
            cout << "Enter value for element of the array at row " << i + 1 << " and column " << j + 1 << ": ";
            cin >> arr[i][j];
        }
    } 

    // Display the values of the array to the console
    cout << "Values of the array:" << endl;
    for (int i = 0; i < columns; ++i) {
        for (int j = 0; j < rows; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;  
    }     

    //deallocate the memory
    for (int i = 0; i < columns; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

return 0;

}