// used prime number of address (7) because it'll make the key value pairs go more random and therefore less collisions.

#include <iostream>

using namespace std;


class Node {  // thes nodes will have three member variable - key, value, next
    public:
        string key;
        int value;
        Node* next;

        Node(string key, int value) {
            this->key = key;
            this->value = value;
            next = nullptr;
        }
};

class HashTable {
    private:
        static const int SIZE = 7; // SIZE is a covention for using const 
                                    // static means we are going to store only one of these in memory
        Node* dataMap[SIZE];

    public:
        // ---------------------------------------------------
        //  Destructor code is similar to keys() function
        //  Watch that video to help understand how this works
        // ---------------------------------------------------
        ~HashTable() {
            for(int i = 0; i < SIZE; i++) {
                Node* head = dataMap[i];
                Node* temp = head;
                while (head) {
                    head = head->next;
                    delete temp;
                    temp = head;
                }
            }
        }
        
        void printTable() {
            for(int i = 0; i < SIZE; i++) {
                cout << i << ":" << endl;
                if(dataMap[i]) {
                    Node* temp = dataMap[i];
                    while (temp) {
                        cout << "   {" << temp->key << ", " << temp->value << "}" << endl;
                        temp = temp->next;
                    }
                }
            }
        }
        
};


int main() {

    HashTable* myHashTable = new HashTable();

    cout << "Hash Table: \n";
    myHashTable->printTable();

    /*
        EXPECTED OUTPUT:
        ----------------
        Hash Table: 
        0:
        1:
        2:
        3:
        4:
        5:
        6:

    */  

}

