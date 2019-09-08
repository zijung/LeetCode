#ifndef LEETCODE_UTILS_UTILS_H
#define LEETCODE_UTILS_UTILS_H

#include <string>
#include <vector>

#include "ListNode.h"

using std::string;
using std::vector;

void trimLeftTrailingSpaces(string &input);

void trimRightTrailingSpaces(string &input);

int stringToInteger(const string &input);

vector<int> stringToIntegerVector(string input);

string stringToString(const string &input);

string boolToString(bool input);

string integerVectorToString(const vector<int> &list, int length = -1);

string twoDimensionalIntegerVectorToString(const vector<vector<int>> &list);

#endif // !LEETCODE_UTILS_UTILS_H
