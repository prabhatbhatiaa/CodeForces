// 26/5/2026, 21:29
// 282A - Bit++

/*
Input:
3
X++
++X
X--

Expected Output:
1
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    // cout << "Enter no of ops: ";
    cin >> n;

    int c = 0;
    while (n--) {
        string s;
        // cout << "Enter op: ";
        cin >> s;
        
        // if (s == "X++" or s == "++X") {  // wont work for small x
        if (s[1] == '+') {
            c++;
        }
        else {
            c--;
        }
    }
    cout << c << endl;
    return 0;
}

/* Algo:
1. Start with x = 0
2. Input no of statements n
3. Loop through n
4. If statement has '+', x++
5. Otherwise decrease x
6. Print x

Time Complexity: O(n)
Space Complexity: O(1)
*/