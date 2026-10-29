
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string s;

    cout << "Enter a string of brackets: ";
    cin >> s;

    stack<char> st;
    bool valid = true;

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        if (ch == '(' || ch == '[' || ch == '{') {
            st.push(ch);
        }
        else {
            if (st.empty()) {
                valid = false;
                break;
            }

            char top = st.top();
            st.pop();

            if ((ch == ')' && top != '(') ||
                (ch == ']' && top != '[') ||
                (ch == '}' && top != '{')) {
                valid = false;
                break;
            }
        }
    }

    if (!st.empty()) {
        valid = false;
    }

    if (valid) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
