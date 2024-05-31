#ifndef MYFUNCTION_IMPL
#define MYFUNCTION_IMPL

#include <iostream>
#include "myfunctions.h"

template<typename T>
constexpr void log(T& msg) noexcept
{
    std::cout << msg << std::endl;
}
void log(size_t msg) noexcept
{
    std::cout << static_cast<int>(msg) << std::endl;
}

std::string getInput(const std::string& prompt)
{
    std::cout << prompt;
    std::string input;
    std::getline(std::cin, input);

    return input;
}

std::string formatInput(const std::string& input) noexcept(true)
{
    std::string strippedInput;
    for (const auto& charact : input) {
        if (isalpha(charact) || isdigit(charact)) {
            strippedInput.push_back(tolower(charact));
        }
    }

    return strippedInput;
}

std::string reverseString(const std::string& input) noexcept(true)
{
    std::string reversedInput;
    for (auto p = --(input.end()); p >= input.begin(); --p) {
        reversedInput.push_back(*p);
    }

    return reversedInput;
}

#endif