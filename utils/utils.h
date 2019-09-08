#ifndef LEETCODE_UTILS_UTILS_H
#define LEETCODE_UTILS_UTILS_H

#include <string>
#include <vector>

#include "ListNode.h"

void trimLeftTrailingSpaces(std::string &input);

void trimRightTrailingSpaces(std::string &input);

int stringToInteger(const std::string &input);

std::vector<int> stringToIntegerVector(std::string input);

std::string stringToString(const std::string &input);

std::string boolToString(bool input);

std::string integerVectorToString(const std::vector<int> &list,
                                  int length = -1);

std::string
twoDimensionalIntegerVectorToString(const std::vector<std::vector<int>> &list);

#endif // !LEETCODE_UTILS_UTILS_H
