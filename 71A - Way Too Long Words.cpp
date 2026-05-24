// 24/5/2026 , 11:20
// 71A - Way Too Long Words
/*
Input:
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis

Expected Output:
word
l10n
i18n
p43s
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        if(s.length() > 10) {
            cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;         
        }
        else {
            cout << s << endl;
        }
    }
    return 0;
}

/*
Algorithm:
1. Read number of test cases.
2. For each word:
    If length > 10: print first character + omitted count + last character
    - Else: print word directly

Time Complexity: O(n)
Space Complexity: O(1)
*/