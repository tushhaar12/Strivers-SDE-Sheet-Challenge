struct Node
{
    int data;
    Node *next;
};

// TC -> O(N)
// SC -> O(1)
Node *rotateRight(Node *head, int k)
{
    if (!head || !head->next || k == 0)
        return head;

    Node *curr = head;
    int cnt = 1;
    while (curr->next)
    {
        curr = curr->next;
        cnt++;
    }

    curr->next = head;
    k = k % cnt;
    k = cnt - k;
    while (k--)
        curr = curr->next;

    head = curr->next;
    curr->next = NULL;
    return head;
}
