/*
    Done by:
    Student: Yakymenko Artur
    Group: 123
*/
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};


inline void addToFront(Node** head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = *head;
    newNode->prev = nullptr;
    if (*head != nullptr) (*head)->prev = newNode;
    *head = newNode;
}


inline void addToEnd(Node** head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    if (*head == nullptr) {
        newNode->prev = nullptr;
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}


inline void removeFromFront(Node** head) {
    if (*head != nullptr) {
        Node* temp = *head;
        *head = (*head)->next;
        if (*head != nullptr) (*head)->prev = nullptr;
        delete temp;
    }
}


inline void removeFromEnd(Node** head) {
    if (*head == nullptr) return;
    if ((*head)->next == nullptr) {
        delete* head;
        *head = nullptr;
        return;
    }
    Node* temp = *head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->prev->next = nullptr;
    delete temp;
}


inline Node* searchElement(Node* head, int value) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == value) return current;
        current = current->next;
    }
    return nullptr;
}


inline void reverseList(Node** head) {
    Node* prev = nullptr, * current = *head, * next = nullptr;
    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}


inline void sortList(Node** head) {
    if (*head == nullptr) return;
    bool swapped;
    Node* ptr1;
    Node* lptr = nullptr;
    do {
        swapped = false;
        ptr1 = *head;
        while (ptr1->next != lptr) {
            if (ptr1->data > ptr1->next->data) {
                swap(ptr1->data, ptr1->next->data);
                swapped = true;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}


inline void toTwoWayList(Node** head) {
    if (*head == nullptr) return;
    Node* last = *head;
    while (last->next != nullptr) {
        last = last->next;
    }
    last->next = *head;
    (*head)->prev = last;
}


inline void clearList(Node** head) {
    Node* current = *head;
    Node* nextNode = nullptr;
    if (current != nullptr && current->next != nullptr) {
        current->prev->next = nullptr;
    }
    while (current != nullptr) {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }
    *head = nullptr;
}


inline void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "null" << std::endl;
}

int main() {
    setlocale(LC_CTYPE, "ukr");
    Node* head = nullptr;

    addToFront(&head, 10);
    addToFront(&head, 20);
    addToFront(&head, 30);
    addToEnd(&head, 40);
    addToEnd(&head, 50);

    std::cout << "List after adding items: ";
    printList(head);

    removeFromFront(&head);
    std::cout << "A list after removing an element from the beginning: ";
    printList(head);

    removeFromEnd(&head);
    std::cout << "A list after removing an element from the end: ";
    printList(head);
    reverseList(&head);
    std::cout << "List after flipping: ";
    printList(head);

    sortList(&head);
    std::cout << "List after sorting: ";
    printList(head);

    toTwoWayList(&head);
    std::cout << "Converted to a two-way looping list.\n";

    clearList(&head);
    std::cout << "List after cleaning: ";
    printList(head);
    return 0;
}