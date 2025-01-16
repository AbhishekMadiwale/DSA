// printing the square pattern

#include<iostream>
using namespace std;

// int main () {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;

//     for (int i=1; i <= n ; i++) {
//         for (int j = 1; j <= n; j++) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// the output should is 
// Enter the number: 5
// 1 2 3 4 5 
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5

// Same problem printing characters

int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << n << endl;
    for (int i = 1; i <= n ; i++) {
        char ch = 'A';
        for (int j = 1; j <= n; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}