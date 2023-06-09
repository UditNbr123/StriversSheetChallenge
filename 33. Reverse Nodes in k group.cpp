#include <bits/stdc++.h>
class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};
Node *reversal(Node *head, int n, int b[], int i) {
	while (b[i] == 0 and i < n)	i++;
	if (!head or !head->next or i == n)	return head;

	int counter = b[i];

	Node *prev = NULL, *cur = head, *ahead;
	while (cur != NULL and counter--) {
		ahead = cur->next;
		cur->next = prev;
		prev = cur;
		cur = ahead;
	}
	head->next = reversal(cur, n, b, i + 1);
	return prev;
}
Node *getListAfterReverseOperation(Node *head, int n, int b[]) {
	// Write your code here.
	if (!head) return NULL;
	for (int i = 0; i < n; i++) {
		if (b[i] == 0)	continue;
		if (!head or head->next)
		}
	return reversal(head, n, b, 0);
}