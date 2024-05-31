# calculator
**input**: equation consisting of digits and operators
**output**: result of equation

## main() {

1. *show welcome message*
    ```cpp
    printWelcomeMsg();

2. *collect input from user*
    ```c++
    char* input = inputFromUser();`

3. *validate user input* 
    ```c++
    if (!isValidInput(input)) {
        log('invalid equation, enter valid equation');
        return 0;
    }

4. *tokenize input*
    ```c++
    vector<char> tokenizedEquation = tokenizeInput(input);
    
5. *calculate equation*
    ```c++
    int result = calculateEquation(tokenizedEquation);
    

6. *print result*
    ```c++
    printResult(result);

    
    return 0;
## }


### inputFromUser() {
1. 
    + ask for input
    + declare variable to hold input and hold input
    + return input
### }

### isValidInput(value) {
1. ```cpp
    isValid{true};
    if (hasLetters()) { // checks if input has letters
        isValid{false};
        return isValid;
    }

    if (alienCharacters(value)) { // checks if input has strange characters
        isValid{false};
        return isValid;
    }

    return isValid;
### }

### vector<char> tokenizeInput(p) {
1. 
    + declare variable and initialize to value of p
    `string tokens = p`

    + ```cpp
        trimString(tokens);
        vector<char> tokenVect;
        for (token in tokens) {
            tokenVect.push_back(token);
        }

    ```cpp
    return tokenVect;
### }

### calculateEquation(tokenizedEquation) {
1. 
    + create variable to hold result
    `int result{}, prev, next;`
    
    + ```cpp
        for (regular loop) {
            if (current iteration value is not digit) {
                prev = next = currentIter
                result = compute(equation[--prev], equation[++next], equation[currentIter]);

                equation[next] = result;
            }
        }

    ```cpp
    return result;
### }