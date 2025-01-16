// Printing a triangle pattern

#include <iostream>
using namespace std;

int main () {
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;

    // for(int i = 1; i <= n; i++) {
    //     for(int j = 1; j <= i-1; j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    int n = 5;
    // for(int i = 1; i <= n; i++) {
    //     for(int j=0; j <= i-1; j++){
    //         cout << i  <<" ";
    //     }
    //     cout << endl;

    // }
// OP 
/* 
1       
2 2     
3 3 3   
4 4 4 4 
5 5 5 5 5

*/
    // char ch = 'A';
    // for(int i = 0 ; i <= n; i++) {
    //     for(int j = 1; j<= i+1; j++) {
    //         cout << ch<<" ";
    //     }
    //     cout <<endl;
    //         ch++;
    // }

/** output 
A 
B B
C C C
D D D D
E E E E E
F F F F F F */

    // int j;
    // for (int i= 1; i <= n; i++) {
    //     for (int j = 1; j <= i-1; j++) {
    //         cout << j << " ";
    //     }
    //     cout <<endl;
    //     j++;
    // }
/**output 
1       
1 2     
1 2 3   
1 2 3 4 
 */
    // char ch = 'a';
    // int j;
    // for (int i = 0; i <= n; i++) {
    //     for(j =1 ; j <= i+1; j++) {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }
/**
output 
a
b c
d e f       
g h i j     
k l m n o   
p q r s t u
 */

// Reverse Triangle
    // for(int i= 0; i <= n; i++) {
    //     for(int j = i+1; j > 0; j--) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
/* 
output 
1
2 1       
3 2 1     
4 3 2 1   
5 4 3 2 1 
6 5 4 3 2 1
*/
    return 0;
}