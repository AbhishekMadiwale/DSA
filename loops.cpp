#include <iostream>
using namespace std;

int main () {
// While loop
    // int num = 10;
    // int count = 1;

    // while (count <= num) {
    //     cout << count << " ";
    //     count++;
    // }
    // return 0;

// Sum of numbers from 1 to n
    // int i = 1;
    // int n;
    // int sum = 0;
    // cout << "Enter a number: ";
    // cin >> n;

    // for (i=1; i <= n; i++) {
    //     sum = sum + i;
    //     cout << sum << " ";
    // }

// Above logic with same result in while loop
    // while ( i <= n) {
    //     sum = sum + i;
    //     i++;
    // }

    // cout << "\nSum is: " << sum;

// Sum of all odd numbers from 1 to n
    // int num;
    // int sum = 0;
    // cout << "Enter a number: ";
    // cin >> num;
    
    // for (i = 1; i <= num; i++) {
    //     if (num % 2 != 0) {
    //     sum = sum + i;
    // }
    // }

// Above question with while loop
    int num;
    int i = 1;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Number is: " << num;
    while (i <= num) {
        if (num % 2 != 0) {
            sum = sum + i;
        }
        i++;
    }

    cout << "\nSum is: " << sum;

    


}