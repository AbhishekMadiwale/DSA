#include <iostream>
using namespace std;

int main () {
    // int n;
    // cout <<"enter a number: ";
    // cin >>n;
    // cout << n << endl;
    // int i;
    // int j;
    // int num = 1;
    // for (i= 1; i <= n; i++) {
    //     for (j = 1; j <= n; j++) {
    //         cout << num << ' ';
    //         num++;
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // return 0;

// printing characters
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << n << endl;
    char ch = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}