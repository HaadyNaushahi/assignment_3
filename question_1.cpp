#include <iostream>
using namespace std;

int main() {
    
    // declaring and initializing array with random values
    int values[10] = {2, 5, 7, 5, 4, 6, 4, 3, 6, 3};

    // declaring and initializing sum variable
    int sum = 0;
    
    // making a loop to traverse through the array
    // and calculating sum with each iteration.
    // also setting the upper bound and lower bound the
    // same as the size of the array.   
    for (int i = 0; i < 10; i++){
            sum += values[i];
    }
    // outputting the value of sum
    cout << "Sum: " << sum << endl;

    // traversing through the array from right to left.
    // also setting the upper bound and lower bound the
    // same as the size of the array.   
    cout << "traversing from right to left: ";
    for (int i = 0; i < 10; i++){
            cout << values[i] << " ";
    }
    
    cout << endl;

    // traversing through the array from left to right.
    // also setting the upper bound and lower bound the
    // same as the size of the array.
    cout << "traversing from left to right: ";
    for (int i = 9; i >= 0; i--){
            cout << values[i] << " ";
    }

    cout << endl;

    return 0;
}
