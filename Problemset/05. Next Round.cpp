// 27/5/2026, 21:03
// 158A - Next Round

/*
Input:
8 5
10 9 8 7 7 7 5 5

Expected Output:
6
*/

#include <iostream>
using namespace std;

int main() {
    int n, k;
    // cout << "No of people space position: ";
    cin >> n >> k;

    int scores[100];
    // cout << "Enter scores with space: ";
    for (int i=0;i<n;i++) {
        cin >> scores[i];
    }

    int kscore = scores[k-1];
    int c=0;
    for (int i=0;i<n;i++) {
        if (scores[i]>=kscore && scores[i]>0) {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}