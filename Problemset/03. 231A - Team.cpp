// 25/5/2026 , 21:50
// 231A - Team

/*
Input:
3
1 1 0
1 1 1
1 0 0

Expected Output:
2
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    // cout << "Enter no of teams: ";
    cin >> n;

    int count = 0;
    while (n--) {
        int a,b,c;
        // cout << "Enter three values for result. O and 1 only: ";
        cin >> a >> b >> c;

        if (a+b+c >= 2) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}

/*
Algorithm:
1. Read number of problems.
2. For each problem:
    Readthe 3 0/1 values
    Add them
    If sum >= 2, count++
3. Print final answer

Time Complexity: O(n)
Space Complexity: O(1)
*/