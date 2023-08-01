/***************************************************************************************************
18.1 SIMPLE LINKED LIST CLASS

This program demonstrates a `LinkedList` class by testing its default constructor
and member functions, which include: 

1. void add(double x) - Adds a new element to the front (head) the `LinkedList` object.
2. boolean isMember(double x) - Checks if an input value is present in the `LinkedList` object.
3. void printList() - Outputs a sequence of all values currently stored in the `LinkedList` object.
***************************************************************************************************/

#include "LinkedList.h"

int main(){
    double input;
    LinkedList list;

    // Adds numbers to an empty `list` object, then displays its updated contents.
    list.add(5.2);
    list.add(7.9);
    list.add(3.6);
    list.printList();
    cout << endl;

    // Prompts user for an input and checks if the input is in `list`.
    cout << "\nEnter a number to check for its presence in the list: ";
    cin >> input;

    if (list.isMember(input)){
        cout << "YES - " << input << " IS a member in the list.\n";
    } else {
        cout << "NO - " << input << " IS NOT a member in the list.\n";
    };

    // Adds more numbers to `list` and displays the updated contents.
    list.add(13.2);
    list.add(29.4);
    list.add(67.3);
    list.printList();
    cout << endl;
    
    // Adds more numbers to `list` and displays the updated contents.
    list.add(15.12);
    list.add(17.19);
    list.add(13.16);
    list.printList();
    cout << endl;

    return 0;
}