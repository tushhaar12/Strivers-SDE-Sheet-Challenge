struct Node
{
    int data;
    Node *next;
};

// TC -> O(N)
// SC -> O(1)
Node *removeNthNodeEnd(Node *head, int n)
{
    Node *start = new Node();
    start->next = head;
    Node *slow = start, *fast = start;
    for (int i = 1; i <= n; i++)
        fast = fast->next;

    while (fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = slow->next->next;
    return start->next;
}
