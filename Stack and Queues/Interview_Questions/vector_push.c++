#include <iostream>
#include <vector>

using namespace std;

class Stack {
    private:
        vector<int> stackVector;
    
    public:
        vector<int>& getStackVector() {
            return stackVector;
        }
    
        void printStack() {
            for (int i = stackVector.size() - 1; i >= 0; i--) {
                cout << stackVector[i] << endl;
            }
        }
    
        bool isEmpty() {
            return stackVector.size() == 0;
        }
    
        int peek() {
            if (isEmpty()) {
                return int();
            } else {
                return stackVector[stackVector.size() - 1];
            }
        }
    
        int size() {
            return stackVector.size();
        }
        
        void push(int value){
            stackVector.push_back(value);
                
        }
    
};



//If the stack is empty, push(int value) will still work fine because std::vector<int> dynamically resizes. 
//The element will simply be added as the first element in the vector.