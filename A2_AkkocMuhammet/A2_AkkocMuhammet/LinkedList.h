#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <iostream>

template <typename T>
class LinkedList {
public:
    Node<T>* head;

    LinkedList() : head(nullptr) {}

    ~LinkedList() {
        while (head != nullptr) {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void display() {
        Node<T>* current = head;
        while (current != nullptr) {
            std::cout << "(" << current->data << ", " << current->priority << ") -> ";
            current = current->next;
        }
        std::cout << "NULL\n";
    }
};

#endif

