#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Declare a vector to store integers
    vector<int> numbers;

    // Add elements to the vector using push_back
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);

    // Access and print vector elements using indices
    cout << "Vector elements: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Modify an element
    numbers[2] = 35;

    // Access and print vector elements using iterators
    cout << "Modified vector elements: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Use range-based for loop to access vector elements
    cout << "Using range-based for loop: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Check if the vector is empty
    if (numbers.empty()) {
        cout << "Vector is empty." << endl;
    } else {
        cout << "Vector is not empty." << endl;
    }

    // Get the size and capacity of the vector
    cout << "Size of vector: " << numbers.size() << endl;
    cout << "Capacity of vector: " << numbers.capacity() << endl;

    // Clear the vector
    numbers.clear();

    // Check if the vector is empty after clearing
    if (numbers.empty()) {
        cout << "Vector is empty after clearing." << endl;
    }

    return 0;
}

