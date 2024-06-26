// TODO:
//
// Declare a Linked List class,
// Linked List, deep copy with assignment operator
// (copy constructor as well as operator overloading of =).
// Linked List, merge 2 lists with + operator.
// (operator overloading of +).
//

/*
Similarly, write a program to do operator overloading on "=" and "+" for Linked List.
for eg:
LL a = b;	// copy constructor
a = b; 		// deep copy
a + b;		// merge lists
a + 10;		// add at end
10 + a; 	// add at beginning.

According to instructor, the main purpose of learning operator overloading,
is to avoid "dangling pointers" by overloading the "=" operator to provide deep copy.
Everything else is extra.

*/
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LL {
    Node* first = nullptr;

public:
    Node* createNode(int data);
    void addAtBeg(int data);
    void addAtEnd(int data);
    void printList();
    void deleteAtBeg();
    int firstElem();
    LL();
    LL(const LL& obj);
    void operator=(LL& robj);
    void operator+(LL& robj);
    void operator+(int x); // Overloaded operator+ to add an integer
    friend void operator+(int x, LL& robj); // Friend function for adding an integer at the beginning
};

int main() {
    LL t;
    t.addAtBeg(10);
    t.addAtBeg(20);
    t.addAtBeg(30);
    t.addAtBeg(40);
    t.addAtBeg(50);

    t.printList();
    
    t.deleteAtBeg();
    
    t.printList();

    LL n = t;
    cout << "new list:\n";
    n.printList();

    LL other;
    other.addAtBeg(5);
    other.addAtBeg(15);
    other.addAtBeg(25);
    other.addAtBeg(35);
    other.addAtBeg(45);
    cout << "other List:\n";
    other.printList();

    other = t;

    cout << "other List after deep copy:\n";
    other.printList();

    other + 1000; // Adding 1000 to the end of the list
    other.printList();

    2 + other; // Adding 2 to the beginning of the list
    other.printList();
}

Node* LL::createNode(int data) {
    Node* New = new Node;
    New->data = data;
    New->next = nullptr;
    return New;
}

void LL::addAtBeg(int data) {
    Node* ptr = createNode(data);
    ptr->next = first;
    first = ptr;
}

void LL::addAtEnd(int data) {
    Node* New = createNode(data);
    if(first == nullptr) {
        first = New;
        return;
    }
    Node* temp = first;
    while(temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = New;
}

void LL::printList() {
    Node* temp = first;
    if(temp == nullptr) {
        cout <<"Empty List\n";
    }
    while(temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

void LL::deleteAtBeg() {
    if(first == nullptr) {
        cout << "Nothing to delete\n";
        return;
    }

    Node* temp = first;
    first = first->next;
    delete temp;
}

int LL::firstElem() {
    if(first == nullptr)
        return -1;
    else
        return first->data;
}

LL::LL() {
    this->first = nullptr;
}

LL::LL(const LL& obj) {
    cout << "copy constructor running \n";
    Node* temp = obj.first;
    while(temp != nullptr) {
        this->addAtEnd(temp->data);
        temp = temp->next;
    }
}

void LL::operator=(LL& robj) {
    while(this->first != nullptr) {
        deleteAtBeg();
    }
    cout << "deep copy running\n";
    Node* temp = robj.first;
    while(temp != nullptr) {
        this->addAtEnd(temp->data);
        temp = temp->next;
    }
}

void LL::operator+(LL& robj) {
    cout << "Merge lists running\n";
    Node* temp = robj.first;
    while(temp != nullptr) {
        this->addAtEnd(temp->data);
        temp = temp->next;
    }
}

void LL::operator+(int x) {
    cout << "Adding " << x << " to the end of the list\n";
    addAtEnd(x);
}

void operator+(int x, LL& robj) {
    cout << "Adding " << x << " to the beginning of the list\n";
    robj.addAtBeg(x);
}
