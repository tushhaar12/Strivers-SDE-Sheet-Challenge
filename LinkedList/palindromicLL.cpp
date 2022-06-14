struct Node
{
    int data;
    Node *next;
};

Node *reverseList(Node *head)
{
    Node *dummy = NULL, *next = NULL;
    ;

    while (head != NULL)
    {
        next = head->next;
        head->next = dummy;
        dummy = head;
        head = next;
    }
    return dummy;
}

// TC -> O(N)
// SC -> O(1)
bool check(Node *head)
{
    if (head == NULL || head->next == NULL)
        return true;

    // Check middle of linked list
    Node *slow = head, *fast = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    slow->next = reverseList(slow->next);
    slow = slow->next;

    while (slow != NULL)
    {
        if (head->data != slow->data)
            return false;
        head = head->next;
        slow = slow->next;
    }
    return true;
}
