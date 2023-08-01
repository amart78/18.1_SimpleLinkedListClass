#include <iostream>
using namespace std;

class LinkedList{
    protected:
        struct ListNode {
            double value;
            ListNode *next;

            // Constructor
            ListNode(double value1, ListNode *next1 = nullptr){
                value = value1;
                next = next1;
            }
        };
        ListNode *head;                     // List head pointer
        
    public:
        // Constructor and Destructor
        LinkedList() { head = nullptr; } 	
        ~LinkedList();                      

        // Member functions
        void add(double x);
        bool isMember(double x);
        void printList() const;
};

// add - Adds a new element (x) to the front (head) of the list.
void LinkedList::add(double x){
    if (head == nullptr){
        head = new ListNode(x);
    } else {
        head = new ListNode(x, head);
    }
}

// isMember: Checks if x is present in the list. 
bool LinkedList::isMember(double x){
    ListNode *current = head;               // Starts at head of list
	while(current != nullptr)
	{
		if (current->value == x){
			return true;
        }
		current = current->next;            // Proceeds to next node value
	}
	return false;
}

// printList: Outputs a sequence of all values currently stored in the list.
void LinkedList::printList() const{
    cout << "\nThe contents of the list are: \n";
    ListNode *current = head;               // Starts at head of list
    while (current != nullptr){
        cout << current->value << "\t";
        current = current->next;            // Proceeds to next node value
    }
}

// ~LinkedList: Destructor that deallocates used memory
LinkedList::~LinkedList(){
    ListNode *current = head;               // Starts at head of list
    while (current != nullptr){
        ListNode *extraMemory = current;    // Holds node to be deleted
        current = current->next;            // Proceeds to next node value
        delete extraMemory;
    }
}

