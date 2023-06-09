#include <bits/stdc++.h>
class LinkedListNode
{
public:
    T data;
    LinkedListNode<T> *next;
    LinkedListNode(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void deleteNode(LinkedListNode<int> * node) {
    // Write your code here.
    LinkedListNode<int> *temp = node->next;
    node->data = temp->data;
    temp = temp->next;
    node->next = temp;
}