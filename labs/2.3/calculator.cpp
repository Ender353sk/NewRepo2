#include <iostream>
#include <stack>
#include <string>
#include <cctype> // for isdigit
#include <stdexcept> // for invalid_argument

using namespace std;

// Function to determine precedence of operators
int precedence(char c) {
    if (c == '+' || c == '-') {
        return 1; // lowest precedence
    }
    else if (c == '*' || c == '/') {
        return 2; // higher precedence
    }
    else {
        return 0; // non-operator characters
    }
}

// Function to perform an operation on two operands
int performOperation(char operation, int operand1, int operand2) {
    switch (operation) {
    case '+': return operand1 + operand2;
    case '-': return operand1 - operand2;
    case '*': return operand1 * operand2;
    case '/':
        if (operand2 == 0) {
            throw invalid_argument("Division by zero is undefined.");
        }
        return operand1 / operand2;
    default: throw invalid_argument("Invalid operator.");
    }
}

// Function to convert infix expression to postfix
string infixToPostfix(const string& expression) {
    stack<char> operators;
    string postfix;

    for (char c : expression) {
        if (isspace(c)) continue; // Ignore spaces
        if (isdigit(c)) {
            postfix += c; // Append operand (digit) to postfix expression
        }
        else {
            // Current character is an operator
            while (!operators.empty() && precedence(operators.top()) >= precedence(c)) {
                postfix += operators.top();
                operators.pop();
            }
            operators.push(c);
        }
    }

    // Pop remaining operators
    while (!operators.empty()) {
        postfix += operators.top();
        operators.pop();
    }

    return postfix;
}

// Function to evaluate postfix expression
int evaluatePostfix(const string& expression) {
    stack<int> operands;

    for (char c : expression) {
        if (isdigit(c)) {
            operands.push(c - '0'); // Convert character digit to integer
        }
        else {
            // Pop two operands for the operator
            if (operands.size() < 2) {
                throw invalid_argument("Invalid postfix expression.");
            }
            int operand2 = operands.top();
            operands.pop();
            int operand1 = operands.top();
            operands.pop();

            // Perform operation and push result back
            int result = performOperation(c, operand1, operand2);
            operands.push(result);
        }
    }

    // Final result should be the only operand in the stack
    if (operands.size() != 1) {
        throw invalid_argument("Invalid postfix expression.");
    }

    return operands.top();
}

int main() {
    string infix;
    cout << "Enter an infix expression: ";
    getline(cin, infix);

    try {
        string postfix = infixToPostfix(infix);
        cout << "Postfix expression: " << postfix << endl;

        int result = evaluatePostfix(postfix);
        cout << "Result: " << result << endl;
    }
    catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}