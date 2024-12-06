#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

#include "LinkedList.h"

template <typename T>
class PriorityQueue {
private:
    LinkedList<T> list;

public:
    PriorityQueue() {}

    ~PriorityQueue() {}

    void Push(T data, int priority) {
        Node<T>* newNode = new Node<T>(data, priority);

        if (list.head == nullptr || list.head->priority > priority) {
            newNode->next = list.head;
            list.head = newNode;
            return;
        }

        Node<T>* current = list.head;
        while (current->next != nullptr && current->next->priority <= priority) {
            current = current->next;
        }

        newNode->next = current->next;
        current->next = newNode;
    }

    T Front() {
        if (list.head == nullptr) {
            throw std::runtime_error("Priority queue is empty.");
        }
        return list.head->data;
    }

    void Pop() {
        if (list.head == nullptr) {
            throw std::runtime_error("Priority queue is empty.");
        }
        Node<T>* temp = list.head;
        list.head = list.head->next;
        delete temp;
    }

    void Display() {
        list.display();
    }
};

#endif

