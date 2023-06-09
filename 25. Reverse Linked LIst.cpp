#include <bits/stdc++.h>

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head)
{
    if (head == NULL or head->next == NULL)  return head;
    LinkedListNode<int> *prev = NULL;
    LinkedListNode<int> *cur = head;
    LinkedListNode<int> *next = head->next;
    while (cur != NULL) {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}