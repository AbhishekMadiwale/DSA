#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    if (n >= 0) {
        cout << "number is positive";
    }   
    else {
        cout << "Number is not positive";
    }
    return 0;
}