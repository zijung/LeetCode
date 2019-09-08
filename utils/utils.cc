#include "utils.h"

#include <algorithm>
#include <sstream>

#include <cassert>

using std::find_if;
using std::stringstream;
using std::vector;
using std::to_string;

void trimLeftTrailingSpaces(string &input) {
    input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {
                    return !isspace(ch);
                }));
}

void trimRightTrailingSpaces(string &input) {
    input.erase(find_if(input.rbegin(),
                        input.rend(),
                        [](int ch) { return !isspace(ch); })
                        .base(),
                input.end());
}

int stringToInteger(const string &input) {
    return stoi(input);
}

vector<int> stringToIntegerVector(string input) {
    vector<int> output;
    trimLeftTrailingSpaces(input);
    trimRightTrailingSpaces(input);
    input = input.substr(1, input.length() - 2);
    stringstream ss;
    ss.str(input);
    string item;
    char delim = ',';
    while (getline(ss, item, delim)) {
        output.push_back(stoi(item));
    }
    return output;
}

string stringToString(const string &input) {
    assert(input.length() >= 2);
    string result;
    for (int i = 1; i < input.length() - 1; i++) {
        char currentChar = input[i];
        if (input[i] == '\\') {
            char nextChar = input[i + 1];
            switch (nextChar) {
            case '\"':
                result.push_back('\"');
                break;
            case '/':
                result.push_back('/');
                break;
            case '\\':
                result.push_back('\\');
                break;
            case 'b':
                result.push_back('\b');
                break;
            case 'f':
                result.push_back('\f');
                break;
            case 'r':
                result.push_back('\r');
                break;
            case 'n':
                result.push_back('\n');
                break;
            case 't':
                result.push_back('\t');
                break;
            default:
                break;
            }
            i++;
        } else {
            result.push_back(currentChar);
        }
    }

    return result;
}

string boolToString(bool input) {
    return input ? "True" : "False";
}

string integerVectorToString(const vector<int> &list, int length) {
    if (length == -1) {
        length = list.size();
    }

    if (length == 0) {
        return "[]";
    }

    string result;
    for(int index = 0; index < length; index++) {
        int number = list[index];
        result += to_string(number) + ", ";
    }

    return "[" + result.substr(0, result.length() - 2) + "]";
}

string twoDimensionalIntegerVectorToString(const vector<vector<int>> &list) {
    string result("[");
    for (auto &i : list) {
        result.append(integerVectorToString(i));
        result.append(", ");
    }
    result.resize(result.size() - 1);
    result.back() = ']';

    return result;
}
