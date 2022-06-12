struct Node
{
    int data;
    struct Node *next;
};

// TC -> O(N)
// SC -> O(1)
Node *rvrse(Node *head)
{
    // 1 2 3 4 5 -> 5 4 3 2 1
    Node *newHead = NULL;
    while (head != NULL)
    {
        Node *next = head->next;
        head->next = newHead;
        newHead = head;
        head = next;
    }
}
