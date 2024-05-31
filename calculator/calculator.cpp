#include <iostream>
#include <vector>
#include "../myfunctions.h"

// main functions

/* 
    prints welcome message
    used by: main
*/
void printWelcomeMsg() noexcept(true);
std::string inputFromUser() noexcept(true);
// validates input based on letters and/or special characters detected
bool isValidInput(const std::string&) noexcept(true);
// breaks down equation into digits and operators 
std::vector<char> parseInput(const std::string&) noexcept(true);
int calculateEquation(std::vector<char>&);
void printResult(const std::string&, const int&) noexcept(true);

// auxilliary functions

bool hasLetters(const std::string&);
bool alienCharacters(const std::string&);
void trimString(std::string&);
int compute(char firstOperand, char secondOperand, char sign);


int main()
{
    printWelcomeMsg();

    std::string equationString = inputFromUser();
    log(equationString);

    if (!isValidInput(equationString)) {
        std::cout << "inalid! enter valid equation";
        return 0;
    }

    std::vector<char> equationVector = parseInput(equationString);

    int result = calculateEquation(equationVector);

    // printResult(equationString, result);

    return 0;
}

void printWelcomeMsg() noexcept(true)
{
    std::cout << "Calculator app" << std::endl;

}

std::string inputFromUser() noexcept(true)
{
    std::cout << "Enter an equation: ";
    std::string input;
    std::getline(std::cin, input);

    return input;
}

bool isValidInput(const std::string& equation) noexcept(true)
{

    // if (hasLetters(equation) || alienCharacters(equation))
    //     return false;

    return true;
}

std::vector<char> parseInput(const std::string& string) noexcept(true)
{
    std::string tokens{string};

   /* trimString(tokens); // remove whitespaces from tokens */
    std::vector<char> tokenVect;
    for (const auto& token : tokens) { 
        tokenVect.push_back(token);
    }

    return tokenVect;
}

int calculateEquation(std::vector<char>& equation)
{
    int result;
    std::vector<char>::iterator prev, next;

    for (auto current = equation.begin(); current != equation.end(); ++current) {
        if (!isdigit(*current)) {
            prev = next = current;
            result = compute(*(--prev), *(++next), *current);

            // *prev = ' ';
            // *current = ' ';
            // *next = result;

            std::cout << "equation is ";
            for (auto eq : equation) 
                std::cout << eq << ' ';
            std::cout << std::endl;
        }
    }

    return 0;
}


int compute(char firstOperand, char secondOperand, char sign)
{
    log(firstOperand);
    log(secondOperand);
    log(sign);

    return 0;
}