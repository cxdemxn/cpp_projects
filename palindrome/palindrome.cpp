#include <iostream>
#include "../myfunctions.h"

// checks if a phrase is a palinderome or not
bool isPalindrome(const std::string&) noexcept(true);
void printResult(const std::string&, const bool& positive) noexcept(true);

int main()
{
    while (1) {
        std::string phrase = getInput("Enter phrase: ");

        if (phrase.size() <= 1) break;

        std::string strippedPhrase = formatInput(phrase);

        bool positive = isPalindrome(strippedPhrase);
        
        printResult(phrase, positive);
    }

    std::cout << "\n***program terminated" << std::endl;

    return 0;
}

bool isPalindrome(const std::string& phrase) noexcept(true)
{
    const std::string reversePhrase = reverseString(phrase);

    // palindrome cannot be of different size from reverse
    if (phrase.size() != reversePhrase.size()) return false;

    // loops over both phrases and returns false upon mismatch
    for (
        auto first = phrase.begin(), second = reversePhrase.begin();
        first != phrase.end();
        ++first, ++second
    ) {
        if (*first != *second) return false;
    }

    return true;
}

void printResult(const std::string& phrase, const bool& positive) noexcept(true)
{
    if (!positive) {
        std::cout << '\'' << phrase << '\'' << " is a not a palindrome\n" << std::endl;
        return;
    }

    std::cout << '\'' << phrase << '\'' << " is a palindrome\n" << std::endl;
}