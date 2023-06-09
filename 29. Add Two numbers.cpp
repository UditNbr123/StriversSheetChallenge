class Node {
public:
    int data;
    Node *next;
    Node() {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
    Node (int data, Node *next) {
        this->data = data;
        this->next = next;
    }
};


Node *addTwoNumbers(Node *num1, Node *num2)
{
    Node *head = new Node(0);
    Node *cur = head;
    int carry = 0;
    while (num1 != NULL or num2 != NULL or carry != 0) {
        int x = num1 ? num1->data : 0;
        int y = num2 ? num2->data : 0;

        int sum = carry + x + y;
        carry = sum / 10;
        cur->next = new Node(sum % 10);
        cur = cur->next;
        num1 = num1 ? num1->next : nullptr;
        num2 = num2 ? num2->next : nullptr;
    }
    return head->next;
}
