struct Node
{
    int data;
    Node *next;
};

// TC->O(2*M)
// SC->O(1)
Node *getIntersectionNode(Node *headA, Node *headB)
{
    if (headA == NULL || headB == NULL)
        return NULL;

    Node *a = headA, *b = headB;
    while (a != b)
    {
        a = (a == NULL) ? headB : a->next;
        b = (b == NULL) ? headA : b->next;
    }
    return a;
}
