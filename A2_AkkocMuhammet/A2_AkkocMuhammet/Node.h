#ifndef NODE_H
#define NODE_H

template <typename T>
class Node {
public:
    T data;
    int priority;
    Node* next;

    Node(T data, int priority) : data(data), priority(priority), next(nullptr) {}
};

#endif

