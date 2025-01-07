#include <iostream>
using namespace std;

int main() {

// Example 1 - finding number is positive or not.

    // int n;
    // cout << "Enter the number: " << endl;
    // cin >> n;

    // if (n >= 0) {
    //     cout << "number is positive";
    // }   
    // else {
    //     cout << "Number is not positive";
    // }
    // return 0;

// Checking if the candidate is eligible for voting or not.
    // int age;
    // cout << "Enter your age: " << endl;
    // cin >> age;

    // if (age >= 18) {
    //     cout << "Candidate eligible for voting";
    // }
    // else {
    //     cout << "Candidate is not eligible for voting";
    // }
    // return 0;

// check if numbers is even or odd
    // int num;
    // cout << "Enter the number: ";
    // cin >> num;

    // if (num % 2 == 0) {
    //     cout << "number is even\n";
    // }
    // else {
    //     cout <<"Number is odd";
    // }
    // return 0;

// Students grade printing with using logical operators
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks >=90) {
        cout << "Grade A\n";
    }
    else if (marks >= 80 && marks < 90) {
        cout << "Grade B\n";
    }
    else {
        cout << "Grade C";
    }
    return 0;
}