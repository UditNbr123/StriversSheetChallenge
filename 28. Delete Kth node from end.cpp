class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};


Node* removeKthNode(Node* head, int K)
{
    if (head == NULL or head->next == NULL) return nullptr;
    Node *fast = head;
    Node *slow = head;
    for (int i = 1; i <= K; i++) {
        fast = fast->next;
        if (!fast) return head->next;
    }
    while (fast->next != NULL) {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = slow->next->next;
    return head;
}
