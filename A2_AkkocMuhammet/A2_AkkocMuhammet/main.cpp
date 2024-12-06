#include <iostream>
#include "PriorityQueue.h"

int main() {
    PriorityQueue<std::string> pq;

    // Test Push
    pq.Push("Task A", 3);
    pq.Push("Task B", 1);
    pq.Push("Task C", 2);
    pq.Push("Task D", 5);

    std::cout << "Priority Queue after insertion:\n";
    pq.Display();

    // Test Front
    std::cout << "\nFront element: " << pq.Front() << "\n";

    // Test Pop
    pq.Pop();
    std::cout << "\nPriority Queue after popping the front element:\n";
    pq.Display();

    return 0;
}

