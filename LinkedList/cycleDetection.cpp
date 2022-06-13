struct Node
{
    int data;
    Node *next;
};

// TC -> O(N)
// SC -> O(1)
bool hasCycle(Node *head)
{
    if (head == NULL || head->next == NULL)
        return false;
    Node *slow = head, *fast = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return true;
    }
    return false;
}
