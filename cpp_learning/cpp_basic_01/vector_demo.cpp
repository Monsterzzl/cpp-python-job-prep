#include<iostream>
#include<vector>
#include<string>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    vector<int> numbers = {10, 20, 30};
    numbers.push_back(40);
    // Print the size of the vector 
    // and the first element
    cout <<"Vector size: " << numbers.size() << endl;
    cout << "First element: " << numbers[0] << endl;
    
    // Print all elements in the vector
    for(int i=0; i<numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Create a string and print it
    string name = "C++";
    cout << "Language: " << name << endl;

    // Call the add function and print the result
    int sum = add(5, 10);
    cout << "Sum of 5 and 10: " << sum << endl;

    return 0;
}