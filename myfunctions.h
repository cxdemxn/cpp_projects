#ifndef MYFUNCTION_H
#define MYFUNCTION_H

#include <string>


// a simple function i use to log and debug
template<typename T>
extern constexpr void log(T& msg) noexcept; 
extern void log(size_t msg) noexcept; 

// displays prompt and returns a line of input from user
std::string getInput(const std::string&);

// strips input of characters besides letters and digits
std::string formatInput(const std::string&) noexcept(true);

// reverses the content of a string
std::string reverseString(const std::string&) noexcept(true);


#include "myfunctions.cpp"
#endif