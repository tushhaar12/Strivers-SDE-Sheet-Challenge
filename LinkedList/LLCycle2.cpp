struct Node
{
    int data;
    Node *next;
};

// TC->O(N)
// SC->O(1)
Node *tailNode(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    Node *slow = head, *fast = head, *entry = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            while (slow != entry)
            {
                slow = slow->next;
                entry = entry->next;
            }
            return slow;
        }
    }
    return NULL;
}
