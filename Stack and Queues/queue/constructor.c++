// stack is LILO - LAST IN LAST OUT

// QUEUE is FIFO - first in first out


/* take out nodes from head ( called as first)
and add nodes from the last (called as last)
we are doing this because both of there steps are O(1)

if we remove from the last then it'll be  O(n) which is not efficient. */

#include <iostream>

using namespace std;

class Node{
    public:
        int value;
        Node* next;

        Node(int value)
        {
            this->value = value;
            next = nullptr;
        }
};

class Queue{
    private:
        Node* first;
        Node* last;
        int length;

    public:
        Queue(int value)
        {
            Node* newNode = new Node(value);
            first = newNode;
            last = newNode;
            length = 1;

        }

        void printQueue()
        {
            Node* temp = first;
            while(temp)
            {
                cout<<temp->value<<endl;
                temp = temp->next;
            }
        }

        void getFirst()
        {
            cout<<"First: "<< first->value <<endl;
        }

        void getLast()
        {
            cout<<"Last: "<< last->value <<endl;
        }

        void getLength()
        {
            cout<<"Length: "<< length <<endl;
        }
};


int main()
{
    Queue* myque = new Queue(7);

    myque->getFirst();
    myque->getLast();
    myque->getLength();
    myque->printQueue();


}
