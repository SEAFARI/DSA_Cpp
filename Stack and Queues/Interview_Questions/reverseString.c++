#include <iostream>
#include <stack>
using namespace std;

// Function to reverse the string
string reverseString(const string& str) {
    stack<char> stack;

    // Push each character onto the stack
    for (char c : str) {
        stack.push(c);
    }

    string reversedString = "";

    // Pop characters from the stack and build the reversed string
    while (!stack.empty()) {
        reversedString += stack.top(); // Get the top character
        stack.pop(); // Remove the top character from the stack (correct usage)
    }

    return reversedString; // Return the reversed string
}

