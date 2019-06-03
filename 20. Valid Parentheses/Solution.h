#include <stack>
#include <string>

using std::stack;
using std::string;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        for (char &i : s) {
            switch (i) {
                case '(':
                case '[':
                case '{':
                    stk.push(i);
                    break;

                case ')':
                    if (stk.empty() || stk.top() != '(') {
                        return false;
                    }

                    stk.pop();
                    break;
                case ']':
                    if (stk.empty() || stk.top() != '[') {
                        return false;
                    }

                    stk.pop();
                    break;
                case '}':
                    if (stk.empty() || stk.top() != '{') {
                        return false;
                    }

                    stk.pop();
                    break;
                default:
                    break;
            }
        }

        return stk.empty();
    }
};
