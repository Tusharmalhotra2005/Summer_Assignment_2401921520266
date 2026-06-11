#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string decodeString(string s) {
        stack<pair<string, int>> st;

        string currentString = "";
        int currentNumber = 0;

        for (char c : s) {
            // 1. If digit → build number
            if (isdigit(c)) {
                currentNumber = currentNumber * 10 + (c - '0');
            }
            // 2. If '[' → save state and reset
            else if (c == '[') {
                st.push({currentString, currentNumber});
                currentString = "";
                currentNumber = 0;
            }
            // 3. If letter → build string
            else if (isalpha(c)) {
                currentString += c;
            }
            // 4. If ']' → pop and build result
            else if (c == ']') {
                pair<string, int> top = st.top();
                st.pop();

                string temp = "";
                for (int i = 0; i < top.second; i++) {
                    temp += currentString;
                }

                currentString = top.first + temp;
            }
        }

        return currentString;
    }
};
