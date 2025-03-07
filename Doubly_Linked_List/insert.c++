#include <iostream>

using namespace std;


class Node { 
    public: 
        int value;
        Node* next;
        Node* prev;
    
        Node(int value) {
            this->value = value;
            this->next = nullptr;
            this->prev = nullptr;
        }
};


class DoublyLinkedList {
    private:
        Node* head;
        Node* tail;
        int length;

    public:
        DoublyLinkedList(int value) {
            Node* newNode = new Node(value);
            head = newNode;
            tail = newNode;
            length = 1;
        }

        ~DoublyLinkedList() {
            Node* temp = head;
            while (head) {
                head = head->next;
                delete temp;
                temp = head;
            }
        }

        void printList() {
            Node* temp = head;
            while (temp != nullptr) {
                cout << temp->value << endl;
                temp = temp->next;
            }
        }

        void getHead() {
            if (head == nullptr) {
                cout << "Head: nullptr" << endl;
            } else {
                cout << "Head: " << head->value << endl;
            }
        }

        void getTail() {
            if (tail == nullptr) {
                cout << "Tail: nullptr" << endl;
            } else { 
                cout << "Tail: " << tail->value << endl;
            }  
        }

        void getLength() {
            cout << "Length: " << length << endl;
        }

        void append(int value) {
            Node* newNode = new Node(value);
            if (length == 0) {
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                newNode->prev = tail;
                tail = newNode;
            }
            length++;
        }

        void deleteLast() {
            if (length == 0) return;
            Node* temp = tail;
            if (length == 1) {
                head = nullptr;
                tail = nullptr;
            } else {
                tail = tail->prev;
                tail->next = nullptr;
            }
            delete temp;
            length--;
        }

        void prepend(int value) {
            Node* newNode = new Node(value);
            if (length == 0) {
                head = newNode;
                tail = newNode;
            } else {
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }
            length++;
        }

        void deleteFirst() {
            if (length == 0) return;
            Node* temp = head;
            if (length == 1) {
                head = nullptr;
                tail = nullptr;
            } else {
                head = head->next;
                head->prev = nullptr;
            }
            delete temp;            
            length--;
        }

        Node* get(int index) {
            if (index < 0 || index >= length) return nullptr;
            Node* temp = head;
            if (index < length/2) {
                for (int i = 0; i < index; ++i) {
                    temp = temp->next;
                }
            } else {
                temp = tail;
                for (int i = length - 1; i > index; --i) {
                    temp = temp->prev;
                }
            }
            return temp;
        }

        bool set(int index, int value) {
            Node* temp = get(index);
            if (temp) {
                temp->value = value;
                return true;
            }
            return false;
        }

 		bool insert(int index,int value)
        {
            if(index<0 || index>length)
                return false;
            if(index==0)
            {
                prepend(value); // prepend already has length++ in it , so no need here. 
                return true;
                
            }
            if(index==length)
            {
                append(value);
                return true;
                
            }
            Node* before = get(index-1);
            Node* after = before->next;
            Node* newNode = new Node(value);

            newNode->prev = before;
            newNode->next = after;
            after->prev = newNode;
            before->next = newNode; 
            length++;
            return true; 
            }
	     
// we can write after using get but it is 0(n) , so we use before->next which is 0(1)
};



int main() {
        
    DoublyLinkedList* myDLL = new DoublyLinkedList(1);
    myDLL->append(3);

    cout << "DLL before insert():" << endl;
    myDLL->printList();
    
    myDLL->insert(1, 2);

    cout << "\nDLL after insert(2) in middle:\n";
    myDLL->printList();

    myDLL->insert(0, 0);

    cout << "\nDLL after insert(0) at beginning:\n";
    myDLL->printList();

    myDLL->insert(4, 4);

    cout << "\nDLL after insert(4) at end:\n";
    myDLL->printList();


    /*  
        EXPECTED OUTPUT:
        ----------------
        DLL before insert():
        1
        3

        DLL after insert(2) in middle:
        1
        2
        3

        DLL after insert(0) at beginning:
        0
        1
        2
        3

        DLL after insert(4) at end:
        0
        1
        2
        3
        4
    
    */
  
}
