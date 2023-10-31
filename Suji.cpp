// Suji is developing a program for a data analysis tool that requires reversing an array of integers and displaying both the original and reversed arrays.



// The program should dynamically allocate memory for the reversed array using the new operator. Write a program to accomplish this task.



// Note: This kind of question will help in clearing Capgemini recruitment.

// Input format :
// The first line of the input represents the size of the array.

// The second line represents the array elements, separated by a space

// Output format :
// The first line of the output displays the original array elements, separated by space.

// The second line displays the reversed array elements, separated by space.

// If n is less than 0, then the output displays the appropriate error message.



// Refer to the sample output for formatting specifications.

// Code constraints :
// 1 <= size <= 100

// Sample test cases :
// Input 1 :
// 5
// 1 2 3 4 5
// Output 1 :
// Original Array: 1 2 3 4 5 
// Reversed Array: 5 4 3 2 1 
// Input 2 :
// -4
// Output 2 :
// Size of the array should be positive!



#include <bits/stdc++.h>

using namespace std;

int main() {
    int size;
    cin >> size;

    if (size <= 0) {
        cout << "Size of the array should be positive!" << endl;
        return 1;
    }

    int* originalArray = new int[size];
    int* reversedArray = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> originalArray[i];
    }

    for (int i = 0; i < size; i++) {
        reversedArray[i] = originalArray[size - 1 - i];
    }

    cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        cout << originalArray[i] << " ";
    }
    cout << endl;

    cout << "Reversed Array: ";
    for (int i = 0; i < size; i++) {
        cout << reversedArray[i] << " ";
    }
    cout << endl;

    delete[] originalArray;
    delete[] reversedArray;

    return 0;
}
