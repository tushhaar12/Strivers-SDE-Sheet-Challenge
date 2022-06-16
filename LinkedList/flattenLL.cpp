struct Node
{
    int data;
    Node *next;
    Node *bottom;
};

// TC -> O(Total no of nodes)
// SC -> O(1)
Node *mergeLists(Node *a, Node *b)
{
    Node *temp = new Node();
    Node *res = temp;

    while (a != NULL && b != NULL)
    {
        if (a->data < b->data)
        {
            temp->bottom = a;
            temp = temp->bottom;
            a = a->bottom;
        }
        else
        {
            temp->bottom = b;
            temp = temp->next;
            b = b->bottom;
        }
    }
    if (a)
        temp->bottom = a;
    else
        temp->bottom = b;
    return res->bottom;
}

Node *flatten(Node *head)
{
    if (!head || !head->next)
        return head;

    head = flatten(head->next);
    head = mergeLists(head, head->next);
    return head;
}
